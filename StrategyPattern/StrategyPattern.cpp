// StrategyPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Duck.h"
#include "FlyNoWays.h"
int main()
{
	Duck d;
	d.perforFly();
	d.setFlyBehavior(new FlyNoWays());
	d.perforFly();
	return 0;
}

