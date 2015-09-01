// FactoryPattern.cpp : 定义控制台应用程序的入口点。
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

