#pragma once
#include "Enumeration.h"
class IntEnum :
	public Enumeration<int>
{
private:
	int* a;
	int length;
	int current;
public:
	IntEnum(int* a, int length);
	bool HasMoreElements();
	int NextElement();
	~IntEnum();
};

