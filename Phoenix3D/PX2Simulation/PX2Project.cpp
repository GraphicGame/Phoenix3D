// PX2Project.cpp

#include "PX2Project.hpp"
#include "PX2XMLData.hpp"
#include "PX2StringHelp.hpp"
#include "PX2ResourceManager.hpp"
#include "PX2StringTokenizer.hpp"
#include "PX2ScriptManager.hpp"
#include "PX2Renderer.hpp"
#include "PX2UIView.hpp"
#include "PX2UISizeFrame.hpp"
#include "PX2UIPicBox.hpp"
#include "PX2EngineLoop.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
Project::Project() :
mEdit_UICameraPercent(1.0f),
mScreenOrientation(SO_LANDSCAPE)
{
	if (ScriptManager::GetSingletonPtr())
		PX2_SM.SetUserTypePointer("PX2_PROJ", "Project", this);

	PX2_ENGINELOOP.msProject = this;

	mBackgroundColor = Float4::MakeColor(255, 255, 200, 255);
	
	mSceneRenderStep = new0 RenderStep();
	mSceneRenderStep->SetPriority(20);
	mSceneRenderStep->SetName("Scene");
	mSceneRenderStep->SetRenderer(Renderer::GetDefaultRenderer());
	PX2_GR.AddRenderStep(mSceneRenderStep->GetName().c_str(), mSceneRenderStep);

	mUIRenderStep = new0 UIView(0);
	mUIRenderStep->SetPriority(10);
	mUIRenderStep->SetDoDepthClear(true);
	mUIRenderStep->SetName("UI");
	mUIRenderStep->SetRenderer(Renderer::GetDefaultRenderer());
	PX2_GR.AddRenderStep(mUIRenderStep->GetName().c_str(), mUIRenderStep);

	mUIFrame = new0 UISizeFrame();
	mUIFrame->SetName("RootFrame");
	SetUIFrame(mUIFrame);
}
//----------------------------------------------------------------------------
Project::~Project ()
{
	PX2_GR.RemoveRenderSteps(mSceneRenderStep);
	mSceneRenderStep = 0;

	PX2_GR.RemoveRenderSteps(mUIRenderStep);
	mUIRenderStep = 0;

	if (ScriptManager::GetSingletonPtr())
		PX2_SM.SetUserTypePointer("PX2_PROJ", "Project", 0);
}
//----------------------------------------------------------------------------
void Project::Destory()
{
	if (PX2_ENGINELOOP.msProject)
	{
		PX2_ENGINELOOP.msProject = 0;
		Project::Set(0);
	}
}
//----------------------------------------------------------------------------
void Project::SetScreenOrientation(ScreenOrientation so)
{
	mScreenOrientation = so;
}
//----------------------------------------------------------------------------
Project::ScreenOrientation Project::_FromSOStr(const std::string &str)
{
	if ("landscape" == str) return SO_LANDSCAPE;
	else if ("portrait" == str) return SO_PORTRAIT;

	return SO_PORTRAIT;
}
//----------------------------------------------------------------------------
std::string Project::_ToSOStr(Project::ScreenOrientation so)
{
	if (SO_LANDSCAPE == so) return "landscape";
	else if (SO_PORTRAIT == so) return "portrait";

	return "portrait";
}
//----------------------------------------------------------------------------
bool Project::Save(const std::string &filename)
{
	if (!SaveConfig(filename))
		return false;

	std::string outPath;
	std::string outBaseName;
	std::string outExt;
	StringHelp::SplitFullFilename(filename, outPath, outBaseName, outExt);

	if (mUIFrame)
	{
		std::string outName = outPath + outBaseName + "_ui.px2obj";

		OutStream output;
		output.Insert(mUIFrame);
		output.Save(outName);
	}

	return false;
}
//----------------------------------------------------------------------------
bool Project::SaveConfig(const std::string &filename)
{
	// xml
	XMLData data;
	data.Create();

	XMLNode projNode = data.NewChild("project");

	// general
	XMLNode generalNode = projNode.NewChild("general");
	generalNode.SetAttributeString("name", GetName().c_str());
	generalNode.SetAttributeString("screenorientation", _ToSOStr(mScreenOrientation));
	generalNode.SetAttributeInt("width", (int)mSize.Width);
	generalNode.SetAttributeInt("height", (int)mSize.Height);
	std::string colorStr =
		StringHelp::IntToString((int)(mBackgroundColor[0] * 255.0f)) + "," +
		StringHelp::IntToString((int)(mBackgroundColor[1] * 255.0f)) + "," +
		StringHelp::IntToString((int)(mBackgroundColor[2] * 255.0f)) + "," +
		StringHelp::IntToString((int)(mBackgroundColor[3] * 255.0f));
	generalNode.SetAttributeString("color", colorStr);

	// scene
	XMLNode sceneNode = projNode.NewChild("scene");
	sceneNode.SetAttributeString("filename", mSceneFilename.c_str());

	// language
	XMLNode languageNode = projNode.NewChild("language");

	// publish
	XMLNode publish = projNode.NewChild("publish");

	// setting
	XMLNode settingNode = projNode.NewChild("edit_setting");
	settingNode.SetAttributeFloat("uicamerapercent", mEdit_UICameraPercent);

	if (data.SaveFile(filename))
	{
		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
bool Project::Load(const std::string &filename)
{
	std::string name;
	int width = 0;
	int height = 0;
	std::string sceneFilename;
	std::string uiFilename;
	std::string languageFilename;

	char *buffer = 0;
	int bufferSize = 0;
	if (PX2_RM.LoadBuffer(filename, bufferSize, buffer))
	{
		XMLData data;
		if (data.LoadBuffer(buffer, bufferSize))
		{
			XMLNode rootNode = data.GetRootNode();

			// general
			XMLNode generalNode = rootNode.GetChild("general");
			if (!generalNode.IsNull())
			{
				name = generalNode.AttributeToString("name");

				SetScreenOrientation(_FromSOStr(generalNode.AttributeToString("screenorientation")));

				width = generalNode.AttributeToInt("width");
				height = generalNode.AttributeToInt("height");
				std::string colorStr = generalNode.AttributeToString("color");
				StringTokenizer stk(colorStr, ",");
				Float4 color = Float4::MakeColor(
					StringHelp::StringToInt(stk[0]),
					StringHelp::StringToInt(stk[1]),
					StringHelp::StringToInt(stk[2]),
					StringHelp::StringToInt(stk[3]));

				Sizef size = Sizef((float)width, (float)height);
				SetName(name);
				SetSize(size);
				mViewRect = Rectf(0.0f, 0.0f, size.Width, size.Height);
				SetBackgroundColor(color);
			}

			// scene
			XMLNode sceneNode = rootNode.GetChild("scene");
			if (!sceneNode.IsNull())
			{
				sceneFilename = sceneNode.AttributeToString("filename");
				SetSceneFilename(sceneFilename);
			}

			// language
			XMLNode languageNode = rootNode.GetChild("language");

			// publish
			XMLNode publishNode = rootNode.GetChild("publish");

			// setting
			XMLNode settingNode = rootNode.GetChild("setting");
			if (!settingNode.IsNull())
			{
				if (settingNode.HasAttribute("uicamerapercent"))
					mEdit_UICameraPercent = settingNode.AttributeToFloat("uicamerapercent");
			}

			// split file names
			std::string outPath;
			std::string outBaseName;
			std::string outExt;
			StringHelp::SplitFullFilename(filename, outPath, outBaseName, outExt);

			// ui
			mUIFilename = outPath + outBaseName + "_ui.px2obj";
		}
	}
	else
	{
		return false;
	}

	return true;
}
//----------------------------------------------------------------------------
void Project::SetScene(Scene *scene)
{
	if (mScene)
	{
		mScene->GoOutEventWorld();
		mScene = 0;
	}

	mScene = scene;
	
	if (mScene)
	{
		mScene->ComeInEventWorld();
	}

	mSceneRenderStep->SetNode(mScene);

	if (mScene)
	{
		CameraActor *camActor = mScene->GetUseCameraActor();

		if (camActor)
		{
			mSceneRenderStep->SetCamera(camActor->GetCamera());
		}
		else
		{
			mSceneRenderStep->SetCamera(0);
		}
	}
	else
	{
		mSceneRenderStep->SetCamera(0);
	}

	mSceneRenderStep->SetSize(mSize);
}
//----------------------------------------------------------------------------
void Project::SetSceneFilename(const std::string &scenefilename)
{
	mSceneFilename = scenefilename;
}
//----------------------------------------------------------------------------
void Project::SetUIFrame(UIFrame *ui)
{
	mUIFrame = ui;
	mUIRenderStep->SetNode(mUIFrame);
	mUIRenderStep->SetSize(mSize);
}
//----------------------------------------------------------------------------
void Project::SetSize(float width, float height)
{
	mSize = Sizef(width, height);
}
//----------------------------------------------------------------------------
void Project::SetSize(const Sizef &size)
{
	mSize = size;

	if (mSceneRenderStep)
	{
		mUIRenderStep->SetSize(mSize);
	}

	if (mUIRenderStep)
	{
		mUIRenderStep->SetSize(mSize);
	}
}
//----------------------------------------------------------------------------
void Project::SetBackgroundColor(const Float4 &color)
{
	mBackgroundColor = color;
}
//----------------------------------------------------------------------------
const Float4 &Project::GetBackgroundColor() const
{
	return mBackgroundColor;
}
//----------------------------------------------------------------------------
bool Project::LoadScene(const std::string &pathname)
{
	Scene *newscene = DynamicCast<Scene>(PX2_RM.BlockLoad(pathname));
	if (newscene)
	{
		Project::GetSingleton().SetScene(newscene);
		Project::GetSingleton().SetSceneFilename(pathname);

		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
bool Project::LoadUI(const std::string &pathname)
{
	ObjectPtr uiObj = PX2_RM.BlockLoad(pathname);
	UIFrame *ui = DynamicCast<UIFrame>(uiObj);
	if (ui)
	{
		Project::GetSingleton().SetUIFrame(ui);

		return true;
	}

	return false;
}
//----------------------------------------------------------------------------
void Project::SetViewRect(const Rectf &viewRect)
{
	if (mSceneRenderStep)
	{
		mSceneRenderStep->SetViewPort(viewRect);
	}

	if (mUIRenderStep)
	{
		mUIRenderStep->SetViewPort(viewRect);
	}
}
//----------------------------------------------------------------------------