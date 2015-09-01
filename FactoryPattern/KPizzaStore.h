#pragma once
#include "PizzaStore.h"
class KPizzaStore :
	public PizzaStore
{
public:
	KPizzaStore();
	Pizza* createPizza(std::string type);
	~KPizzaStore();
};

