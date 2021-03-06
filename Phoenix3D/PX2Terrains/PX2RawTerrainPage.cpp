// PX2RawTerrainPage.cpp

#include "PX2RawTerrainPage.hpp"
#include "PX2ResourceManager.hpp"
#include "PX2StandardMesh.hpp"
#include "PX2VertexBufferAccessor.hpp"
#include "PX2EditTerrainMaterial.hpp"
#include "PX2CameraModelPositionConstant.hpp"
#include "PX2ShineEmissiveConstant.hpp"
#include "PX2ShineAmbientConstant.hpp"
#include "PX2ShineDiffuseConstant.hpp"
#include "PX2ShineSpecularConstant.hpp"
#include "PX2LightAmbientConstant.hpp"
#include "PX2LightDiffuseConstant.hpp"
#include "PX2LightSpecularConstant.hpp"
#include "PX2LightAttenuationConstant.hpp"
#include "PX2LightModelDVectorConstant.hpp"
using namespace PX2;

PX2_IMPLEMENT_RTTI(PX2, TerrainPage, RawTerrainPage);
PX2_IMPLEMENT_STREAM(RawTerrainPage);
PX2_IMPLEMENT_FACTORY(RawTerrainPage);
PX2_IMPLEMENT_DEFAULT_NAMES(TerrainPage, RawTerrainPage);

//----------------------------------------------------------------------------
RawTerrainPage::RawTerrainPage (VertexFormat* vformat, int size,
	float* heights, const Float2& origin, float spacing)
	:
TerrainPage(size, heights, origin, spacing)
{
	float ext = mSpacing*mSizeM1;
	TriMesh* mesh = StandardMesh(vformat).Rectangle(mSize, mSize, ext, ext);
	mVFormat = vformat;
	mVBuffer = mesh->GetVertexBuffer();
	mIBuffer = mesh->GetIndexBuffer();
	delete0(mesh);

	VertexBufferAccessor vba(mVFormat, mVBuffer);
	int numVertices = mVBuffer->GetNumElements();
	for (int i = 0; i < numVertices; ++i)
	{
		int x = i % mSize;
		int y = i / mSize;
		vba.Position<Float3>(i) = Float3(GetX(x), GetY(y), GetHeight(i));
		vba.Normal<Float3>(i) = Float3(0.0f, 0.0f, 1.0f);
	}

	UpdateModelSpace(Renderable::GU_NORMALS);

	mUV01 = Float4(12.0f, 12.0f, 12.0f, 12.0f);
	mUV23 = Float4(12.0f, 12.0f, 12.0f, 12.0f);
	mUV4 = Float4(12.0f, 12.0f, 12.0f, 12.0f);

	mUV01Float = new0 ShaderFloat(1);
	mUV23Float = new0 ShaderFloat(1);
	mUV4Float = new0 ShaderFloat(1);
	mFogParam = new0 ShaderFloat(1);
	mFogColor = new0 ShaderFloat(1);

	SetUV0(Float2(mUV01[0], mUV01[1]));
	SetUV1(Float2(mUV01[2], mUV01[3]));
	SetUV2(Float2(mUV23[0], mUV23[1]));
	SetUV3(Float2(mUV23[2], mUV23[3]));
	SetUV4(Float2(mUV4[0], mUV4[1]));

	int texSize = 128;
	if (size > 256)
		texSize = 256;

	mTextureAlpha = new0 Texture2D(Texture::TF_A8R8G8B8, texSize, texSize, 1);
	mTextureAlpha->SetResourcePath(GraphicsRoot::sTerResPath);
	mTextureDefaultFilename = "Data/engine/grass.png";
}
//----------------------------------------------------------------------------
RawTerrainPage::~RawTerrainPage ()
{
}
//----------------------------------------------------------------------------
void RawTerrainPage::UpdateToHighField ()
{
	int vertexNum = GetVertexBuffer()->GetNumElements();

	VertexBufferAccessor vba(this);

	for (int i=0; i<vertexNum; i++)
	{
		float height = vba.Position<Float3>(i)[2];
		mHeights[i] = height;
	}

	UpdateModelSpace(Renderable::GU_MODEL_BOUND_ONLY);
}
//----------------------------------------------------------------------------
void RawTerrainPage::UpdateHoles ()
{
	IndexBuffer *indexBuf = GetIndexBuffer();

	unsigned short* indices = (unsigned short*)indexBuf->GetData();
	for (int i1 = 0; i1 < mSize - 1; ++i1)
	{
		for (int i0 = 0; i0 < mSize - 1; ++i0)
		{
			int v0 = i0 + mSize * i1;

			int v1 = v0 + 1;
			int v2 = v1 + mSize;
			int v3 = v0 + mSize;

			if (IsHole(v0))
			{
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v0;
			}
			else
			{
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v1;
				*indices++ = (unsigned short)v2;
				*indices++ = (unsigned short)v0;
				*indices++ = (unsigned short)v2;
				*indices++ = (unsigned short)v3;
			}
		}
	}

	if (Renderer::GetDefaultRenderer()->IsBind(GetIndexBuffer()))
	{
		Renderer::GetDefaultRenderer()->Update(GetIndexBuffer());
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture (int index, Texture2D *texture)
{
	assertion(index>=0 && index<=4, "index must in right range.");

	switch (index)
	{
	case 0:
		return SetTexture0(texture);
	case 1:
		return SetTexture1(texture);
	case 2:
		return SetTexture2(texture);
	case 3:
		return SetTexture3(texture);
	case 4:
		return SetTexture4(texture);
	default:
		break;
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture0 (Texture2D *texture)
{
	mTexture0Filename = texture->GetResourcePath();

	if (!texture->HasMipmaps() && texture->CanGenMinmaps())
		texture->GenerateMipmaps();
	mMtlInst->SetPixelTexture(0, "Sampler0", texture);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture0 (const std::string &texture0Filename)
{
	Texture2D *tex = DynamicCast<Texture2D>(PX2_RM.BlockLoad(texture0Filename));
	if (tex)
	{
		SetTexture0(tex);
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTextureAlpha (Texture2D *texture)
{
	mTextureAlpha = texture;
	mMtlInst->SetPixelTexture(0, "SamplerAlpha", mTextureAlpha);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture1 (Texture2D *texture)
{
	mTexture1Filename = texture->GetResourcePath();

	if (!texture->HasMipmaps() && texture->CanGenMinmaps())
		texture->GenerateMipmaps();
	mMtlInst->SetPixelTexture(0, "Sampler1", texture);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture1 (const std::string &texture1Filename)
{
	Texture2D *tex = DynamicCast<Texture2D>(PX2_RM.BlockLoad(texture1Filename));
	if (tex)
	{
		SetTexture1(tex);
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture2 (Texture2D *texture)
{
	mTexture2Filename = texture->GetResourcePath();

	if (!texture->HasMipmaps() && texture->CanGenMinmaps())
		texture->GenerateMipmaps();
	mMtlInst->SetPixelTexture(0, "Sampler2", texture);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture2 (const std::string &texture2Filename)
{
	Texture2D *tex = DynamicCast<Texture2D>(PX2_RM.BlockLoad(texture2Filename));
	if (tex)
	{
		SetTexture2(tex);
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture3 (Texture2D *texture)
{
	mTexture3Filename = texture->GetResourcePath();

	if (!texture->HasMipmaps() && texture->CanGenMinmaps())
		texture->GenerateMipmaps();
	mMtlInst->SetPixelTexture(0, "Sampler3", texture);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture3 (const std::string &texture3Filename)
{
	Texture2D *tex = DynamicCast<Texture2D>(PX2_RM.BlockLoad(texture3Filename));
	if (tex)
	{
		SetTexture3(tex);
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture4 (Texture2D *texture)
{
	mTexture4Filename = texture->GetResourcePath();

	if (!texture->HasMipmaps() && texture->CanGenMinmaps())
		texture->GenerateMipmaps();
	mMtlInst->SetPixelTexture(0, "Sampler4", texture);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetTexture4 (const std::string &texture4Filename)
{
	Texture2D *tex = DynamicCast<Texture2D>(PX2_RM.BlockLoad(texture4Filename));
	if (tex)
	{
		SetTexture4(tex);
	}
}
//----------------------------------------------------------------------------
Texture2D *RawTerrainPage::GetTexture(int index)
{
	std::string texFilename = mTextureDefaultFilename;

	if (0 == index)
		texFilename = mTexture0Filename;
	else if (1 == index)
		texFilename = mTexture1Filename;
	else if (2 == index)
		texFilename = mTexture2Filename;
	else if (3 == index)
		texFilename = mTexture3Filename;
	else if (4 == index)
		texFilename = mTexture4Filename;

	return DynamicCast<Texture2D>(
		ResourceManager::GetSingleton().BlockLoad(texFilename));
}
//----------------------------------------------------------------------------
Texture2D *RawTerrainPage::GetTexture0 ()
{
	return DynamicCast<Texture2D>(
		ResourceManager::GetSingleton().BlockLoad(mTexture0Filename));
}
//----------------------------------------------------------------------------
Texture2D *RawTerrainPage::GetTexture1 ()
{
	return DynamicCast<Texture2D>(
		ResourceManager::GetSingleton().BlockLoad(mTexture1Filename));
}
//----------------------------------------------------------------------------
Texture2D *RawTerrainPage::GetTexture2 ()
{
	return DynamicCast<Texture2D>(
		ResourceManager::GetSingleton().BlockLoad(mTexture2Filename));
}
//----------------------------------------------------------------------------
Texture2D *RawTerrainPage::GetTexture3 ()
{
	return DynamicCast<Texture2D>(
		ResourceManager::GetSingleton().BlockLoad(mTexture3Filename));
}
//----------------------------------------------------------------------------
Texture2D *RawTerrainPage::GetTexture4 ()
{
	return DynamicCast<Texture2D>(
		ResourceManager::GetSingleton().BlockLoad(mTexture4Filename));
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetUV (int index, Float2 uv)
{
	assertion(index>=0 && index<=4, "index must in right range.");

	switch (index)
	{
	case 0:
		return SetUV0(uv);
	case 1:
		return SetUV1(uv);
	case 2:
		return SetUV2(uv);
	case 3:
		return SetUV3(uv);
	case 4:
		return SetUV4(uv);
	default:
		break;
	}
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetUV0 (Float2 uv)
{
	mUV01[0] = uv[0];
	mUV01[1] = uv[1];
	mUV01Float->SetRegister(0, (float*)&mUV01);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetUV1 (Float2 uv)
{
	mUV01[2] = uv[0];
	mUV01[3] = uv[1];
	mUV01Float->SetRegister(0, (float*)&mUV01);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetUV2 (Float2 uv)
{
	mUV23[0] = uv[0];
	mUV23[1] = uv[1];
	mUV23Float->SetRegister(0, (float*)&mUV23);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetUV3 (Float2 uv)
{
	mUV23[2] = uv[0];
	mUV23[3] = uv[1];
	mUV23Float->SetRegister(0, (float*)&mUV23);
}
//----------------------------------------------------------------------------
void RawTerrainPage::SetUV4 (Float2 uv)
{
	mUV4[0] = uv[0];
	mUV4[1] = uv[1];
	mUV4Float->SetRegister(0, (float*)&mUV4);
}
//----------------------------------------------------------------------------
Float2 RawTerrainPage::GetUV (int index)
{
	assertion(index>=0 && index<=4, "index must in right range.");

	switch (index)
	{
	case 0:
		return GetUV0();
	case 1:
		return GetUV1();
	case 2:
		return GetUV2();
	case 3:
		return GetUV3();
	case 4:
		return GetUV4();
	default:
		break;
	}

	return Float2();
}
//----------------------------------------------------------------------------
void RawTerrainPage::CreateEditMtlInstPerVertex (EditTerrainMaterial *material, 
	Shine *shine)
{
	PX2::Light *light = 0;
	for (int i=0; i<(int)mInfulencedLights.size(); i++)
	{
		Light *lit = mInfulencedLights[i];
		if (lit->GetType() == Light::LT_DIRECTIONAL)
		{
			light = lit;
			break;
		}
	}

	if (light == 0)
	{
		light = new0 Light(Light::LT_DIRECTIONAL);
		light->Ambient = Float4(1.0f, 0.8f, 0.8f, 1.0f);
		light->Diffuse = Float4(1.0f, 0.8f, 0.6f, 1.0f);
		light->Intensity = 1.0f;
		light->SetDirection(AVector(-1.0f, -1.0f, -1.0f));
	}

	mMtlInst = new0 MaterialInstance(material, 0);
	mMtlInst->SetName("MI");
	mMtlInst->SetVertexConstant(0, "PVWMatrix", new0 PVWMatrixConstant());
	mMtlInst->SetVertexConstant(0, "WMatrix", new0 WMatrixConstant());
	mMtlInst->SetVertexConstant(0, "gShineEmissive", new0 ShineEmissiveConstant());
	mMtlInst->SetVertexConstant(0, "gShineAmbient", new0 ShineAmbientConstant(shine));
	mMtlInst->SetVertexConstant(0, "gShineDiffuse", new0 ShineDiffuseConstant(shine));
	mMtlInst->SetVertexConstant(0, "gShineSpecular", new0 ShineSpecularConstant(shine));
	mMtlInst->SetVertexConstant(0, "gLightAmbient", new0 LightAmbientConstant(light));
	mMtlInst->SetVertexConstant(0, "gLightDiffuse", new0 LightDiffuseConstant(light));
	mMtlInst->SetVertexConstant(0, "gLightSpecular", new0 LightSpecularConstant(light));
	mMtlInst->SetVertexConstant(0, "FogParam", new0 FogParamConstant());
	mMtlInst->SetVertexConstant(0, "CameraWorldPosition", new0 CameraWorldPositionConstant());
	mMtlInst->SetVertexConstant(0, "LightWorldDirection", new0 LightWorldDVectorConstant(light));

	mMtlInst->SetPixelConstant(0, "UVScale01", mUV01Float);
	mMtlInst->SetPixelConstant(0, "UVScale23", mUV23Float);
	mMtlInst->SetPixelConstant(0, "UVScale4", mUV4Float);
	mMtlInst->SetPixelConstant(0, "FogColor", new0 FogColorConstant());

	SetTexture0(mTextureDefaultFilename);
	SetTextureAlpha(mTextureAlpha);
	SetTexture1(mTextureDefaultFilename);
	SetTexture2(mTextureDefaultFilename);
	SetTexture3(mTextureDefaultFilename);
	SetTexture4(mTextureDefaultFilename);

	SetMaterialInstance(mMtlInst);
}
//----------------------------------------------------------------------------
void RawTerrainPage::UpdateWorldData (double applicationTime)
{
	TriMesh::UpdateWorldData(applicationTime);

	PX2::Light *light = 0;
	for (int i=0; i<(int)mInfulencedLights.size(); i++)
	{
		Light *lit = mInfulencedLights[i];
		if (lit->GetType() == Light::LT_DIRECTIONAL)
		{
			light = lit;
			break;
		}
	}

	if (light!=0 && light!=mDirLight)
	{
		mDirLight = light;

		mMtlInst->SetVertexConstant(0, "gLightAmbient",	new0 LightAmbientConstant(mDirLight));
		mMtlInst->SetVertexConstant(0, "gLightDiffuse",	new0 LightDiffuseConstant(mDirLight));
		mMtlInst->SetVertexConstant(0, "gLightSpecular",	new0 LightSpecularConstant(mDirLight));
		mMtlInst->SetVertexConstant(0, "LightWorldDirection", new0 LightWorldDVectorConstant(mDirLight));
	}
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Property
//----------------------------------------------------------------------------
void RawTerrainPage::RegistProperties ()
{
	TerrainPage::RegistProperties();

	AddPropertyClass("RawTerrainPage");

	AddProperty("Texture0", Object::PT_STRINGBUTTON, mTexture0Filename);
	AddProperty("UV0", Object::PT_FLOAT2, Float2(mUV01[0], mUV01[1]));

	AddProperty("Texture1", Object::PT_STRINGBUTTON, mTexture1Filename);
	AddProperty("UV1", Object::PT_FLOAT2, Float2(mUV01[2], mUV01[3]));

	AddProperty("Texture2", Object::PT_STRINGBUTTON, mTexture2Filename);
	AddProperty("UV2", Object::PT_FLOAT2, Float2(mUV23[0], mUV23[1]));

	AddProperty("Texture3", Object::PT_STRINGBUTTON, mTexture3Filename);
	AddProperty("UV3", Object::PT_FLOAT2, Float2(mUV23[2], mUV23[3]));

	AddProperty("Texture4", Object::PT_STRINGBUTTON, mTexture4Filename);
	AddProperty("UV4", Object::PT_FLOAT2, Float2(mUV4[0], mUV4[1]));
}
//----------------------------------------------------------------------------
void RawTerrainPage::OnPropertyChanged (const PropertyObject &obj)
{
	TerrainPage::OnPropertyChanged(obj);

	if ("Texture0" == obj.Name)
	{
		SetTexture0(PX2_ANY_AS(obj.Data, std::string));
	}
	else if ("UV0" == obj.Name)
	{
		SetUV(0, PX2_ANY_AS(obj.Data, Float2));
	}
	else if ("Texture1" == obj.Name)
	{
		SetTexture1(PX2_ANY_AS(obj.Data, std::string));
	}
	else if ("UV1" == obj.Name)
	{
		SetUV(1, PX2_ANY_AS(obj.Data, Float2));
	}
	else if ("Texture2" == obj.Name)
	{
		SetTexture2(PX2_ANY_AS(obj.Data, std::string));
	}
	else if ("UV2" == obj.Name)
	{
		SetUV(2, PX2_ANY_AS(obj.Data, Float2));
	}
	else if ("Texture3" == obj.Name)
	{
		SetTexture3(PX2_ANY_AS(obj.Data, std::string));
	}
	else if ("UV3" == obj.Name)
	{
		SetUV(3, PX2_ANY_AS(obj.Data, Float2));
	}
	else if ("Texture4" == obj.Name)
	{
		SetTexture4(PX2_ANY_AS(obj.Data, std::string));
	}
	else if ("UV4" == obj.Name)
	{
		SetUV(4, PX2_ANY_AS(obj.Data, Float2));
	}
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// �־û�֧��
//----------------------------------------------------------------------------
RawTerrainPage::RawTerrainPage (LoadConstructor value)
	:
TerrainPage(value)
{
}
//----------------------------------------------------------------------------
void RawTerrainPage::Load (InStream& source)
{
	PX2_BEGIN_DEBUG_STREAM_LOAD(source);

	TerrainPage::Load(source);
	PX2_VERSION_LOAD(source);

	source.ReadPointer(mMtlInst);

	source.ReadString(mTextureDefaultFilename);
	source.ReadString(mTexture0Filename);

	source.ReadPointer(mTextureAlpha);

	source.ReadString(mTexture1Filename);
	source.ReadString(mTexture2Filename);
	source.ReadString(mTexture3Filename);
	source.ReadString(mTexture4Filename);

	source.ReadAggregate(mUV01);
	source.ReadAggregate(mUV23);
	source.ReadAggregate(mUV4);
	source.ReadPointer(mUV01Float);
	source.ReadPointer(mUV23Float);
	source.ReadPointer(mUV4Float);

	PX2_END_DEBUG_STREAM_LOAD(RawTerrainPage, source);
}
//----------------------------------------------------------------------------
void RawTerrainPage::Link (InStream& source)
{
	TerrainPage::Link(source);

	source.ResolveLink(mMtlInst);
	source.ResolveLink(mTextureAlpha);
	source.ResolveLink(mUV01Float);
	source.ResolveLink(mUV23Float);
	source.ResolveLink(mUV4Float);
}
//----------------------------------------------------------------------------
void RawTerrainPage::PostLink ()
{
	TerrainPage::PostLink();

	SetTexture0(mTexture0Filename);
	SetTexture1(mTexture1Filename);
	SetTexture2(mTexture2Filename);
	SetTexture3(mTexture3Filename);
	SetTexture4(mTexture4Filename);

	UpdateHoles();
}
//----------------------------------------------------------------------------
bool RawTerrainPage::Register (OutStream& target) const
{
	if (TerrainPage::Register(target))
	{
		if (mMtlInst)
			target.Register(mMtlInst);
	
		if (mTextureAlpha)
			target.Register(mTextureAlpha);

		if (mUV01Float)
		{
			target.Register(mUV01Float);
		}

		if (mUV23Float)
		{
			target.Register(mUV23Float);
		}

		if (mUV4Float)
		{
			target.Register(mUV4Float);
		}

		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void RawTerrainPage::Save (OutStream& target) const
{
	PX2_BEGIN_DEBUG_STREAM_SAVE(target);

	TerrainPage::Save(target);
	PX2_VERSION_SAVE(target);

	target.WritePointer(mMtlInst);

	target.WriteString(mTextureDefaultFilename);
	target.WriteString(mTexture0Filename);

	target.WritePointer(mTextureAlpha);

	target.WriteString(mTexture1Filename);
	target.WriteString(mTexture2Filename);
	target.WriteString(mTexture3Filename);
	target.WriteString(mTexture4Filename);

	target.WriteAggregate(mUV01);
	target.WriteAggregate(mUV23);
	target.WriteAggregate(mUV4);
	target.WritePointer(mUV01Float);
	target.WritePointer(mUV23Float);
	target.WritePointer(mUV4Float);

	PX2_END_DEBUG_STREAM_SAVE(RawTerrainPage, target);
}
//----------------------------------------------------------------------------
int RawTerrainPage::GetStreamingSize (Stream &stream) const
{
	int size = TerrainPage::GetStreamingSize(stream);

	size += PX2_VERSION_SIZE(mVersion);
	size += PX2_POINTERSIZE(mMtlInst);
	size += PX2_STRINGSIZE(mTextureDefaultFilename);
	size += PX2_STRINGSIZE(mTexture0Filename);
	size += PX2_POINTERSIZE(mTextureAlpha);
	size += PX2_STRINGSIZE(mTexture1Filename);
	size += PX2_STRINGSIZE(mTexture2Filename);
	size += PX2_STRINGSIZE(mTexture3Filename);
	size += PX2_STRINGSIZE(mTexture4Filename);
	size += sizeof(mUV01);
	size += sizeof(mUV23);
	size += sizeof(mUV4);
	size += PX2_POINTERSIZE(mUV01Float);
	size += PX2_POINTERSIZE(mUV23Float);
	size += PX2_POINTERSIZE(mUV4Float);

	return size;
}
//----------------------------------------------------------------------------
