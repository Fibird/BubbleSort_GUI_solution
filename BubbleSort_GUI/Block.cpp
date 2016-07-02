#include "stdafx.h"
#include "Block.h"


CBlock::CBlock()
{
}

CBlock::CBlock(UINT h, POINT p, COLORREF c)
	: height(h), pos(p), color(c)
{
}

void CBlock::ShowBlock(CDC * pDC)
{
	CBrush brush(color);
	CBrush *pOldBrush = pDC->SelectObject(&brush);
	pDC->Rectangle(pos.x, pos.y - height, pos.x + width, pos.y);
	pDC->SelectObject(pOldBrush);
}

COLORREF CBlock::GetColor()
{
	return color;
}

UINT CBlock::GetHeight()
{
	return height;
}

POINT CBlock::GetPos()
{
	return pos;
}

void CBlock::SetColor(COLORREF color)
{
	color = color;
}

void CBlock::SetHeight(UINT h)
{
	height = h;
}

void CBlock::SetPos(POINT p)
{
	pos = p;
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

void CBlock::test()
{
	int i = 0;
	while (TRUE)
	{
		SetColor(RGB(255, 255, 255 - 1));
		i = i + 5;
	}
}


CBlock::~CBlock()
{
}
