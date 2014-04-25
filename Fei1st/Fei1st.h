
// Fei1st.h : main header file for the Fei1st application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CFei1stApp:
// See Fei1st.cpp for the implementation of this class
//

class CFei1stApp : public CWinAppEx
{
public:
	CFei1stApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFei1stApp theApp;
