//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : ps_build_events_page.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __ps_build_events_page__
#define __ps_build_events_page__

/**
@file
Subclass of PSBuildEventsBasePage, which is generated by wxFormBuilder.
*/

#include "project_settings_base_dlg.h"
#include "project_settings_dlg.h"

//// end generated include

/** Implementing PSBuildEventsBasePage */
class PSBuildEventsPage : public PSBuildEventsBasePage, public IProjectSettingsPage
{
    bool m_isPreEvents;
    ProjectSettingsDlg* m_dlg;

protected:
    virtual void OnProjectEnabledUI(wxUpdateUIEvent& event);
    // Handlers for PSBuildEventsBasePage events.
    void OnCmdEvtVModified(wxCommandEvent& event);

public:
    /** Constructor */
    PSBuildEventsPage(wxWindow* parent, bool preEvents, ProjectSettingsDlg* dlg);
    //// end generated class members

    virtual void Load(BuildConfigPtr buildConf);
    virtual void Save(BuildConfigPtr buildConf, ProjectSettingsPtr projSettingsPtr);
    virtual void Clear();
};

#endif // __ps_build_events_page__
