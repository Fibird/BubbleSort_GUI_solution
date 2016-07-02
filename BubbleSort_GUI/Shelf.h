#pragma once


#include "Block.h"
#include <memory>
#include <list>

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
