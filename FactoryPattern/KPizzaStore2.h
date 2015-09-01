#pragma once
#include "PizzaStore2.h"
#include "KPizzaIngredientFactory.h"
#include "CheesePizza2.h"

class KPizzaStore2 :
	public PizzaStore2
{
public:
	KPizzaStore2();
	Pizza2* createPizza();
	~KPizzaStore2();
};

