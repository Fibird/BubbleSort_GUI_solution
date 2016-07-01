#include "stdafx.h"
#include "Block.h"


CBlock::CBlock()
{
}

CBlock::CBlock(UINT h, POINT p, COLORREF c)
	: height{ h }, pos{ p }, color{ c }
{
}

void CBlock::ShowBlock(CDC * pDC, POINT pos)
{
	CBrush brush(color);
	CBrush *pOldBrush = pDC->SelectObject(&brush);
	pDC->Rectangle(pos.x, pos.y - height, pos.x + width, pos.y);
	pDC->SelectObject(pOldBrush);
}

void CBlock::SetColor(COLORREF color)
{
	color = color;
}

void CBlock::glow()
{
	// Highlight the block
	SetColor(RGB(255, 0, 180));
}

void CBlock::unglow()
{
	SetColor(RGB(0, 0, 0));
}


CBlock::~CBlock()
{
}
