#pragma once
#include "Pizza.h"
#include <string>
class PizzaStore
{
public:
	PizzaStore();
	Pizza* orderPizza(std::string type);
	virtual Pizza* createPizza(std::string type) = 0;
	~PizzaStore();
};

