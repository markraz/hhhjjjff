// drawcli.h : main header file for the DRAWCLI application
//

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include <afxtempl.h>       // drawcli uses collection class templates

/////////////////////////////////////////////////////////////////////////////
// CDrawApp:
// See drawcli.cpp for the implementation of this class
//

class CDrawApp : public CWinApp
{
public:
	CDrawApp();

// Overrides
	virtual BOOL InitInstance();

// Implementation
protected:
	//{{AFX_MSG(CDrawApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
