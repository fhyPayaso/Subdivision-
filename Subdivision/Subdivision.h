// Subdivision.h : main header file for the Subdivision application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CSubdivisionApp:
// See Subdivision.cpp for the implementation of this class
//

// CWinApp应用程序类
class CSubdivisionApp : public CWinApp
{
public:
	CSubdivisionApp();


// Overrides
public:
	// mfc 程序入口
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSubdivisionApp theApp;