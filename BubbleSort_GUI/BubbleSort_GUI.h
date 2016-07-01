
// BubbleSort_GUI.h : main header file for the BubbleSort_GUI application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CBubbleSort_GUIApp:
// See BubbleSort_GUI.cpp for the implementation of this class
//

class CBubbleSort_GUIApp : public CWinApp
{
public:
	CBubbleSort_GUIApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBubbleSort_GUIApp theApp;
