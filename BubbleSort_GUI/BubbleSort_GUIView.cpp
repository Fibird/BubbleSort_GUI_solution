
// BubbleSort_GUIView.cpp : implementation of the CBubbleSort_GUIView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "BubbleSort_GUI.h"
#endif

#include "BubbleSort_GUIDoc.h"
#include "BubbleSort_GUIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "Shelf.h"

// CBubbleSort_GUIView

IMPLEMENT_DYNCREATE(CBubbleSort_GUIView, CView)

BEGIN_MESSAGE_MAP(CBubbleSort_GUIView, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_SWITCH_START, &CBubbleSort_GUIView::OnSwitchStart)
END_MESSAGE_MAP()

// CBubbleSort_GUIView construction/destruction

CBubbleSort_GUIView::CBubbleSort_GUIView()
{
	// TODO: add construction code here
	//SetTimer(1, 1000, NULL);
}

CBubbleSort_GUIView::~CBubbleSort_GUIView()
{
}

BOOL CBubbleSort_GUIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CBubbleSort_GUIView drawing


void CBubbleSort_GUIView::OnDraw(CDC* pDC)
{
	CBubbleSort_GUIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CShelf s(10, POINT{400, 400});

	for (CBlock &b : s.shelf)
	{
		b.ShowBlock(pDC);
	}
}


// CBubbleSort_GUIView diagnostics

#ifdef _DEBUG
void CBubbleSort_GUIView::AssertValid() const
{
	CView::AssertValid();
}

void CBubbleSort_GUIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBubbleSort_GUIDoc* CBubbleSort_GUIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBubbleSort_GUIDoc)));
	return (CBubbleSort_GUIDoc*)m_pDocument;
}
#endif //_DEBUG


// CBubbleSort_GUIView message handlers

void CBubbleSort_GUIView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CBubbleSort_GUIView::OnSwitchStart()
{
	// TODO: Add your command handler code here
	SetTimer(1, 1, NULL);
}
