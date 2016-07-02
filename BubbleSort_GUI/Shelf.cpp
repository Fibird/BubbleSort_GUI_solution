#include "stdafx.h"
#include "Shelf.h"


CShelf::CShelf()
{
}

CShelf::CShelf(UINT s, POINT p)
	: size(s), start_pos(p)
{
}

BOOL CShelf::InitShelf()
{
	POINT p{ start_pos.x, start_pos.y };
	int val[10] = { 5, 6, 2, 3, 8, 1, 9, 4, 7, 10 };
	for (unsigned int i = 0; i < 10; i++)
	{
		CBlock b(val[i] * 30, p, RGB(0, 0, 0));
		//CBlock b;
		shelf.push_back(b);
		p.x = start_pos.x + i * 10;
	}
	return TRUE;
}


CShelf::~CShelf()
{
}
