// PX2E_MainFrame.hpp

#ifndef PX2E_MAINFRAME_HPP
#define PX2E_MAINFRAME_HPP

#include "PX2EditorPre.hpp"
#include "PX2EventHandler.hpp"
#include "PX2Singleton_NeedNew.hpp"
#include "PX2EditParams.hpp"

namespace PX2Editor
{

	class StartView;
	class RenderView;
	class UIRenderView;
	class ProjView;
	class ResView;
	class InspView;
	class TopView;
	class LogicView;
	class TimeLineView;
	class PX2wxAuiNotebook;
	class PX2wxAuiToolBar;

	class E_MainFrame : public wxFrame, public PX2::EventHandler, public PX2::Singleton<E_MainFrame>
	{
	public:
		E_MainFrame(const std::string &title, int xPos, int yPos,
			int width, int height);
		virtual ~E_MainFrame();

		bool Initlize();

		RenderView *GetRenderViewScene();

		virtual void DoExecute(PX2::Event *event);

		void OnTimer(wxTimerEvent& e);
		void OnCommondItem(wxCommandEvent &e);
		void OnMenuToolItem(wxMouseEvent &e);
		void OnMenuClose(wxMenuEvent &e);
		void OnAllowNotebookDnD(wxAuiNotebookEvent& evt);
		void OnNotebookPageClose(wxAuiNotebookEvent& evt);
		void OnNotebookPageClosed(wxAuiNotebookEvent& evt);

		void OnShortcutKeyDown();

		void OnNewProject();
		void OnOpenProject();
		void OnSaveProject();
		void OnSaveProjectAs();
		void OnCloseProject();

		void OnNewScene();
		void OnOpenScene();
		void OnSaveScene();
		void OnSaveSceneAs();
		void OnCloseScene();

		void OnSetEditMode(int type);
		void OnSetting();

	public:
		wxMenu *AddMainMenuItem(const std::string &title);
		wxMenuItem *AddMenuItem(wxMenu *menu, const std::string &title,
			const std::string &script);
		void AddSeparater(wxMenu *menu);
		wxAuiManager *GetAuiMananger();

		void AddTool(PX2wxAuiToolBar *toolBar, const std::string &icon, std::string &script);
		void AddToolSeparater(PX2wxAuiToolBar *toolBar);

		void AddMenuTool(PX2wxAuiToolBar *toolBar, const std::string &MenuTitle, std::string &script);

	protected:
		DECLARE_EVENT_TABLE()

		void _CreateTopView();
		void _CreateMenuToolBar();
		void _CreateMainToolBar();
		void _CreateMenu();
		void _CreateViews();

		void _CreateMainView(bool isTopStype);
		void _CreateProjView(bool isTopStype);
		void _CreateInsp(bool isTopStype);
		void _CreateTimeLine(bool isTopStype);
		void _CreateStatusBar();

		void _UpdateStatusSelectObject(int index);
		void _UpdateStatusSelectRes(int index);
		void _UpdateStatusPickingPos(int index);

		struct WindowObj
		{
			WindowObj()
			{
				TheWindow = 0; 
				NoteBook = 0;
			}
			~WindowObj() {}

			std::string Name;
			std::string Caption;
			wxWindow *TheWindow;

			PX2wxAuiNotebook *NoteBook;
		};

		PX2wxAuiNotebook *_CreateView(wxWindow *window0,
			const std::string &paneName, const std::string &panelCaption,
			wxAuiPaneInfo &paneInfo,
			bool isTopStyle);

		PX2wxAuiNotebook *_CreateView(std::vector<WindowObj> &objs,
			const std::string &panelName,
			const std::string &panelCaption,
			wxAuiPaneInfo &paneInfo,
			bool isTopStyle);

	protected:
		std::string mPerspConfigName;

		bool mIsInitlized;
		
		wxMenuBar *mMainMenuBar;
		wxAuiManager *mAuiManager;
		std::map<std::string, WindowObj> mWindowObjs;

		wxTimer mTimer;
		std::map<int, std::string> mIDScripts;

		PX2wxAuiToolBar *mToolBarCaption;
		PX2wxAuiToolBar *mToolBarMenu;
		PX2wxAuiToolBar *mToolBarMain;

		wxMenu *mToolMenu;

		TopView *mTopView;
		StartView *mStartView;
		RenderView *mRenderViewScene;
		RenderView *mRenderViewLogic;
		ProjView *mProjView;
		ResView *mResView;
		InspView *mInspView;
		TimeLineView *mTimeLineView;

		PX2wxAuiNotebook *mNoteBookCenter;

		bool mIsCrossCursor;
	};

}

#endif