#pragma once
#include "Iterator.h"
#include "Enumeration.h"
class EnumIT :
	public Iterator<int>
{
private:
	Enumeration<int>* em;
public:
	EnumIT(Enumeration<int> *em);
	bool HasNext();
	int Next();
	~EnumIT();
};

