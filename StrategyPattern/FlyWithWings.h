#pragma once
#include "FlyBehavior.h"
#include <iostream>
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	void fly();
	~FlyWithWings();
};

