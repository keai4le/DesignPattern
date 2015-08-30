#pragma once
#include "FlyBehavior.h"
class Duck
{
private:
	FlyBehavior *flyBehavior;
public:
	Duck();
	void perforFly();
	void setFlyBehavior(FlyBehavior *fb);
	~Duck();
};

