// StrategyPattern.cpp : 定义控制台应用程序的入口点。
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

