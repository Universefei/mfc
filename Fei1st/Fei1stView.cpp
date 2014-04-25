
// Fei1stView.cpp : implementation of the CFei1stView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Fei1st.h"
#endif

#include "Fei1stDoc.h"
#include "Fei1stView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFei1stView

IMPLEMENT_DYNCREATE(CFei1stView, CView)

BEGIN_MESSAGE_MAP(CFei1stView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CFei1stView construction/destruction

CFei1stView::CFei1stView()
{
	// TODO: add construction code here

}

CFei1stView::~CFei1stView()
{
}

BOOL CFei1stView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CFei1stView drawing

void CFei1stView::OnDraw(CDC* /*pDC*/)
{
	CFei1stDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CFei1stView printing

BOOL CFei1stView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFei1stView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFei1stView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CFei1stView diagnostics

#ifdef _DEBUG
void CFei1stView::AssertValid() const
{
	CView::AssertValid();
}

void CFei1stView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFei1stDoc* CFei1stView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFei1stDoc)));
	return (CFei1stDoc*)m_pDocument;
}
#endif //_DEBUG


// CFei1stView message handlers


void CFei1stView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	//MessageBox(CString("FeiLunzhou"));
	CView::OnLButtonDown(nFlags, point);
}


void CFei1stView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	MessageBox(CString("Double clicked!"));
	CView::OnLButtonDblClk(nFlags, point);
}


int CFei1stView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	CreateSolidCaret(20, 100);
	ShowCaret();
	return 0;
}
