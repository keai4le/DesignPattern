// SingletonPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SingleTonClass.h"
#include "SingleTonClass2.h"
void test()
{
	SingleTonClass2* s = SingleTonClass2::getInstance();
}
int main()
{
	SingleTonClass2* s = SingleTonClass2::getInstance();
	test();
    return 0;
}

