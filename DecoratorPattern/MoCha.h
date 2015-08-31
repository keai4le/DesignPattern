#pragma once
#include "CondimentDecorator.h"
class MoCha :
	public CondimentDecorator
{
private:
	Beverage* beverage;
public:
	MoCha(Beverage *beverage);
	float cost();
	std::string getDescription();
	~MoCha();
};

