#pragma once
#include "FlyBehavior.h"
#include <iostream>
class FlyNoWays :
	public FlyBehavior
{
public:
	FlyNoWays();
	void fly();
	~FlyNoWays();
};

