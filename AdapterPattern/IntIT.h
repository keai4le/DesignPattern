#pragma once
#include "Iterator.h"
#include <iostream>
class IntIT :
	public Iterator<int>
{
private:
	int* a;
	int length;
	int current;
public:
	IntIT(int* a,int length);
	bool HasNext();
	int Next();
	~IntIT();
};

