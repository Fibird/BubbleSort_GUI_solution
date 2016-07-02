#include "stdafx.h"
#include "Shelf.h"


CShelf::CShelf()
{
}

CShelf::CShelf(UINT s, POINT p)
	: size(s), start_pos(p)
{
	int w = 20;  //width of block
	int val[10] = { 5, 6, 2, 3, 8, 1, 9, 4, 7, 10 };
	for (unsigned int i = 0; i < 10; i++)
	{
		CBlock b(val[i] * 30, p, w, RGB(0, 0, 0));
		//CBlock b;
		shelf.push_back(b);
		p.x = start_pos.x + i * (w + 2);
	}
}


CShelf::~CShelf()
{
}
