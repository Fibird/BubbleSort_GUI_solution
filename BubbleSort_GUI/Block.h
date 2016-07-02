#pragma once
#include "afx.h"
class CBlock :
	public CObject
{
protected:
	UINT height;
	COLORREF color;
	POINT pos;
	UINT width;
public:
	CBlock();
	CBlock(UINT h, POINT p, UINT w, COLORREF c = RGB(0, 0, 0));
	CBlock(const CBlock& c);
	void ShowBlock(CDC* pDC);
	COLORREF GetColor();
	UINT GetHeight();
	POINT GetPos();
	void SetColor(COLORREF color);
	void SetHeight(UINT h);
	void SetPos(POINT p);
	void glow();
	void unglow();
	void test();
	virtual ~CBlock();
};

