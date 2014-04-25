
// Fei1stView.h : interface of the CFei1stView class
//

#pragma once


class CFei1stView : public CView
{
protected: // create from serialization only
	CFei1stView();
	DECLARE_DYNCREATE(CFei1stView)

// Attributes
public:
	CFei1stDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CFei1stView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // debug version in Fei1stView.cpp
inline CFei1stDoc* CFei1stView::GetDocument() const
   { return reinterpret_cast<CFei1stDoc*>(m_pDocument); }
#endif

