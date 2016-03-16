//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: MacrosBaseDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "macrosbasedlg.h"
#include "codelite_exports.h"


// Declare the bitmap loading function
extern void wxCrafter9XIsf4InitBitmapResources();

static bool bBitmapLoaded = false;


MacrosBaseDlg::MacrosBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter9XIsf4InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer3);
    
    wxBoxSizer* bSizer4 = new wxBoxSizer(wxVERTICAL);
    
    bSizer3->Add(bSizer4, 1, wxEXPAND, 5);
    
    m_listCtrlMacros = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLC_VRULES|wxLC_HRULES|wxLC_SINGLE_SEL|wxLC_REPORT);
    
    bSizer4->Add(m_listCtrlMacros, 1, wxALL|wxEXPAND, 5);
    
    m_stdBtnSizer2 = new wxStdDialogButtonSizer();
    
    bSizer3->Add(m_stdBtnSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button4 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button4->SetDefault();
    m_stdBtnSizer2->AddButton(m_button4);
    
    m_button6 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer2->AddButton(m_button6);
    m_stdBtnSizer2->Realize();
    
    SetName(wxT("MacrosBaseDlg"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_listCtrlMacros->Connect(wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK, wxListEventHandler(MacrosBaseDlg::OnItemRightClick), NULL, this);
    
}

MacrosBaseDlg::~MacrosBaseDlg()
{
    m_listCtrlMacros->Disconnect(wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK, wxListEventHandler(MacrosBaseDlg::OnItemRightClick), NULL, this);
    
}
