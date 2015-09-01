#pragma once
#include "Shit.h"
class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory();
	virtual Shit* createShit()=0;
	~PizzaIngredientFactory();
};

