#pragma once
#include "Pizza2.h"
class PizzaStore2
{
public:
	PizzaStore2();
	virtual Pizza2* createPizza()=0;
	~PizzaStore2();
};

