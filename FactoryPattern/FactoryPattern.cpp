// FactoryPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "KPizzaStore.h"
#include "KPizzaStore2.h"
#include "CheesePizza2.h"
int main()
{
	/*KPizzaStore* kp = new KPizzaStore();
	kp->orderPizza("cheese");*/
	KPizzaStore2* kp2 = new KPizzaStore2();
	kp2->createPizza()->prepare();
    return 0;
}

