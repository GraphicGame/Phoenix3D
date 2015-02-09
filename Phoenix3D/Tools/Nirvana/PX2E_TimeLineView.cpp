// PX2E_PreView.cpp

#include "PX2E_TimeLineView.hpp"
#include "PX2E_TimeLineRender.hpp"
#include "PX2E_Define.hpp"
using namespace PX2Editor;
using namespace PX2;

IMPLEMENT_DYNAMIC_CLASS(PX2Editor::TimeLineView, wxWindow)
BEGIN_EVENT_TABLE(TimeLineView, wxWindow)
END_EVENT_TABLE()
//----------------------------------------------------------------------------
TimeLineView::TimeLineView()
{
}
//----------------------------------------------------------------------------
TimeLineView::TimeLineView(wxWindow *parent) :
wxWindow(parent, -1)
{
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer(wxVERTICAL);

	TimeLineBar = new wxToolBar(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
		wxTB_HORIZONTAL | wxTB_FLAT | wxTB_NODIVIDER);
	TimeLineBar->Realize();

	bSizer55->Add(TimeLineBar, 0, wxEXPAND | wxBOTTOM, 5);

	bSizer54->Add(bSizer55, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer(wxVERTICAL);

	mSearchCtrl = new wxSearchCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1, 22),
		wxTE_CAPITALIZE | wxTE_CENTER | wxTE_PROCESS_ENTER | wxNO_BORDER);
	mSearchCtrl->ShowSearchButton(false);
	mSearchCtrl->ShowCancelButton(false);
	bSizer56->Add(mSearchCtrl, 0, wxEXPAND, 5);

	bSizer54->Add(bSizer56, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer(wxVERTICAL);

	mTimeLineRender = new TimeLineRender(this);
	bSizer57->Add(mTimeLineRender, 1, wxEXPAND | wxTOP, 2);

	bSizer54->Add(bSizer57, 1, wxEXPAND, 5);

	this->SetSizer(bSizer54);
	this->Layout();
}
//----------------------------------------------------------------------------
TimeLineView::~TimeLineView()
{
}
//----------------------------------------------------------------------------
void TimeLineView::SetColorForTheme(EditParams::Theme theme)
{
	SetBackgroundColour(Float3TowxColour(theme.backColor));
	mTimeLineRender->SetBackgroundColour(Float3TowxColour(theme.backColor));

	TimeLineBar->SetBackgroundColour(Float3TowxColour(theme.toolBarColor));
	TimeLineBar->SetForegroundColour(Float3TowxColour(theme.toolBarColor));

	mSearchCtrl->SetBackgroundColour(Float3TowxColour(theme.searchColor));
}
//----------------------------------------------------------------------------
