#pragma once
#include "afx.h"
class CBlock :
	public CObject
{
protected:
	UINT height;
	COLORREF color;
	POINT pos;
	UINT width = 10;
public:
	CBlock();
	CBlock(UINT h, POINT p, COLORREF c = RGB(0, 0, 0));
	void ShowBlock(CDC* pDC, POINT pos);
	void SetColor(COLORREF color);
	void glow();
	void unglow();
	virtual ~CBlock();
};

