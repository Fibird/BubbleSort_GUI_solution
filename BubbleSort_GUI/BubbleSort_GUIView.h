
// BubbleSort_GUIView.h : interface of the CBubbleSort_GUIView class
//

#pragma once
#include "Block.h"

class CBubbleSort_GUIView : public CView
{
protected: // create from serialization only
	CBubbleSort_GUIView();
	DECLARE_DYNCREATE(CBubbleSort_GUIView)

// Attributes
public:
	CBubbleSort_GUIDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CBubbleSort_GUIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BubbleSort_GUIView.cpp
inline CBubbleSort_GUIDoc* CBubbleSort_GUIView::GetDocument() const
   { return reinterpret_cast<CBubbleSort_GUIDoc*>(m_pDocument); }
#endif

