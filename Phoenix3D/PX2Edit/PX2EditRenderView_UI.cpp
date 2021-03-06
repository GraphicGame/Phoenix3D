// PX2EditRenderView_UI.cpp

#include "PX2EditRenderView_UI.hpp"
#include "PX2Edit.hpp"
#include "PX2GraphicsRoot.hpp"
#include "PX2StandardMesh.hpp"
#include "PX2VertexColor4Material.hpp"
#include "PX2Project.hpp"
#include "PX2EditEventType.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
EditRenderView_UI::EditRenderView_UI():
EditRenderView(0)
{
	_CreateGridGeometry();

	Edit::EditType editType = PX2_EDIT.GetEditType();
	Enable(editType == Edit::ET_UI);
}
//----------------------------------------------------------------------------
EditRenderView_UI::~EditRenderView_UI()
{
	if (mRenderStep)
	{
		PX2_GR.RemoveRenderSteps(mRenderStep);
		mRenderStep = 0;
	}

	if (mRenderStepCtrl)
	{
		PX2_GR.RemoveRenderSteps(mRenderStepCtrl);
		mRenderStepCtrl = 0;
	}

	if (mRenderStepCtrl1)
	{
		PX2_GR.RemoveRenderSteps(mRenderStepCtrl1);
		mRenderStepCtrl1 = 0;
	}
}
//----------------------------------------------------------------------------
void EditRenderView_UI::_CreateGridGeometry()
{
	VertexFormat *vf = PX2_GR.GetVertexFormat(GraphicsRoot::VFT_PC);

	VertexBuffer *vertexBuffer = new0 VertexBuffer(5, vf->GetStride());
	mProjRangeSegment = new0 Polysegment(vf, vertexBuffer, true);
	mProjRangeSegment->SetNumSegments(4);
	mProjRangeSegment->SetMaterialInstance(VertexColor4Material::CreateUniqueInstance());
	mProjRangeSegment->Culling = Movable::CULL_NEVER;

	_UpdateProjectRange();

	mRangeNode = new0 Node();
	mRangeNode->AttachChild(mProjRangeSegment);

	mRenderStepCtrl = new0 RenderStep();
	mRenderStepCtrl->SetName("UIRangeSegmentRenderStep");
	mRenderStepCtrl->SetSizeChangeReAdjustCamera(false);
	mRenderStepCtrl->SetNode(mRangeNode);
	PX2_GR.AddRenderStep(mRenderStepCtrl->GetName().c_str(), mRenderStepCtrl);
}
//----------------------------------------------------------------------------
void EditRenderView_UI::_UpdateProjectRange()
{
	Project *proj = Project::GetSingletonPtr();
	if (!proj) return;

	float width = proj->GetWidth();
	float height = proj->GetHeight();

	VertexBufferAccessor vba(mProjRangeSegment);
	vba.Position<Float3>(0) = Float3(-1.0f, 0.0f, -1.0f);
	vba.Position<Float3>(1) = Float3(width, 0.0f, -1.0f);
	vba.Position<Float3>(2) = Float3(width, 0.0f, height);
	vba.Position<Float3>(3) = Float3(-1.0f, 0.0f, height);
	vba.Position<Float3>(4) = Float3(-1.0f, 0.0f, -1.0f);
	vba.Color<Float4>(0, 0) = Float4::BLACK;
	vba.Color<Float4>(0, 1) = Float4::BLACK;
	vba.Color<Float4>(0, 2) = Float4::BLACK;
	vba.Color<Float4>(0, 3) = Float4::BLACK;
	vba.Color<Float4>(0, 4) = Float4::BLACK;

	mProjRangeSegment->UpdateModelSpace(Renderable::GU_MODEL_BOUND_ONLY);
	Renderer::UpdateAll(mProjRangeSegment->GetVertexBuffer());
}
//----------------------------------------------------------------------------
void EditRenderView_UI::_AdjustCameraPercent()
{
	Project *proj = Project::GetSingletonPtr();
	if (!proj) return;

	float uiCameraPercent = proj->GetEdit_UICameraPercent();
	Sizef size = Sizef(mSize.Width*uiCameraPercent, mSize.Height*uiCameraPercent);

	proj->GetUIRenderStep()->SetCameraFrustumSize(size);
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnSize(const Sizef& size)
{
	mSize = size;

	Project *proj = Project::GetSingletonPtr();
	if (!proj) return;

	EditRenderView::OnSize(size);

	_AdjustCameraPercent();
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnLeftDown(const APoint &pos)
{
	EditRenderView::OnLeftDown(pos);

	_PickPos();
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnLeftUp(const APoint &pos)
{
	EditRenderView::OnLeftUp(pos);
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnMiddleDown(const APoint &pos)
{
	EditRenderView::OnMiddleDown(pos);

	_PickPos();
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnMiddleUp(const APoint &pos)
{
	EditRenderView::OnMiddleUp(pos);
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnMouseWheel(float delta)
{
	if (PX2_EDIT.IsCtrlDown)
	{
		float uiCameraPercent = PX2_PROJ.GetEdit_UICameraPercent();
		uiCameraPercent += Mathf::Sign(delta) * 0.02f;
		if (uiCameraPercent >= 0.1f && uiCameraPercent <= 10.0f)
		{
			PX2_PROJ.SetEdit_UICameraPercent(uiCameraPercent);
			_AdjustCameraPercent();
		}
	}
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnRightDown(const APoint &pos)
{
	EditRenderView::OnRightDown(pos);

	_PickPos();
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnRightUp(const APoint &pos)
{
	EditRenderView::OnRightUp(pos);
}
//----------------------------------------------------------------------------
void EditRenderView_UI::OnMotion(const APoint &pos)
{
	APoint curPos = pos;
	APoint lastPos = mLastMousePoint;
	AVector delta = curPos - lastPos;
	mLastMousePoint = curPos;

	if (delta == AVector::ZERO) return;

	if (PX2_EDIT.IsCtrlDown && (mIsMiddleDown || mIsRightDown))
	{
		AVector detalMove = delta;
		detalMove.X() *= mPixelToWorld.second;
		detalMove.Z() *= mPixelToWorld.second;

		UIView *uiView = PX2_PROJ.GetUIRenderStep();

		CameraNode *cameraNode = uiView->GetCameraNode();
		APoint trans = cameraNode->LocalTransform.GetTranslate();
		trans -= detalMove;

		cameraNode->LocalTransform.SetTranslate(trans);
	}
}
//----------------------------------------------------------------------------
void EditRenderView_UI::DoExecute(Event *event)
{
	EditRenderView::DoExecute(event);
	
	if (EditEventSpace::IsEqual(event, EditEventSpace::SetEditType))
	{
		Edit::EditType editType = PX2_EDIT.GetEditType();
		if (editType == Edit::ET_UI)
		{
			Enable(true);
		}
		else
		{
			Enable(false);
		}
	}
}
//----------------------------------------------------------------------------
void EditRenderView_UI::_PickPos()
{
	APoint origin;
	AVector direction;
	mRenderStep->GetPickRay(mLastMousePoint.X(), mLastMousePoint.Z(), origin, direction);

	TriMesh *xzPlane = PX2_GR.GetXZPlane();

	Picker pick;
	pick.Execute(xzPlane, origin, direction, 0.0f, Mathf::MAX_REAL);

	const PickRecord &record = pick.GetClosestNonnegative();
	if (record.Intersected)
	{
		APoint pickPos = origin + direction * record.T;
		pickPos = APoint(pickPos[0], pickPos[1], (int)pickPos[2]);

		PX2_EDIT.SetPickPos(pickPos);
	}
}
//----------------------------------------------------------------------------