#pragma once
#include "PizzaIngredientFactory.h"
#include "KShit.h"
class KPizzaIngredientFactory :
	public PizzaIngredientFactory
{
public:
	KPizzaIngredientFactory();
	Shit* createShit();
	~KPizzaIngredientFactory();
};

