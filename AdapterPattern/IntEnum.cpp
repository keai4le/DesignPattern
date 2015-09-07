#include "IntEnum.h"



IntEnum::IntEnum(int* a,int length)
{
	this->a = a;
	this->length = length;
	this->current = 0;
}

bool IntEnum::HasMoreElements()
{
	if (this->current < this->length)
		return true;
	return false;
}

int IntEnum::NextElement()
{
	return a[this->current++];
}


IntEnum::~IntEnum()
{
}
