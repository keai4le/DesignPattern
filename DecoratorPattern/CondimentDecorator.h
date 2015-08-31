#pragma once
#include "Beverage.h"
class CondimentDecorator :
	public Beverage
{
public:
	CondimentDecorator();
	virtual std::string getDescription()=0;
	~CondimentDecorator();
};

