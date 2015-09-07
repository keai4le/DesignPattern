// AdapterPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IntIT.h"
#include "IntEnum.h"
#include "EnumIT.h"
int main()
{
	int* a = new int[2];
	IntIT* b = new IntIT(a,2);
	IntEnum* c = new IntEnum(a, 2);
	EnumIT* d = new EnumIT(c);
	a[0] = 1;
	a[1] = 2;
	while(d->HasNext())
		std::cout << d->Next();
    return 0;
}

