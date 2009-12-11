#ifndef __Subversion2__
#define __Subversion2__

#include "plugin.h"

class SubversionPage;
class SvnShell;

class Subversion2 : public IPlugin
{
private:
	SubversionPage *m_subversionPage;
	SvnShell       *m_subversionShell;

public:
	Subversion2(IManager *manager);
	~Subversion2();

	//--------------------------------------------
	//Abstract methods
	//--------------------------------------------
	virtual wxToolBar *CreateToolBar(wxWindow *parent);
	virtual void CreatePluginMenu(wxMenu *pluginsMenu);
	virtual void HookPopupMenu(wxMenu *menu, MenuType type);
	virtual void UnHookPopupMenu(wxMenu *menu, MenuType type);
	virtual void UnPlug();

	SvnShell *GetShell() {
		return m_subversionShell;
	}

	IManager *GetManager() {
		return m_mgr;
	}

	SubversionPage *GetSvnPage() {
		return m_subversionPage;
	}

protected:
	void DoInitialize();
};

#endif //Subversion2

