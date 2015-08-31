// DecoratorPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "DarkRoast.h"
#include "MoCha.h"
#include <iostream>
int main()
{
	Beverage* b1= new DarkRoast();
	b1 = new MoCha(b1);
	b1 = new MoCha(b1);
	std::cout << b1->getDescription() << "....." << b1->cost() <<std::endl;
    return 0;
}

