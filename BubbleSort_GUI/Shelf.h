#pragma once
#include <list>
#include "Block.h"

class CShelf
{
public:
	std::list<CBlock> shelf;
protected:
	UINT size;
	POINT start_pos;
public:
	CShelf();
	CShelf(UINT s, POINT p);
	virtual ~CShelf();
};
