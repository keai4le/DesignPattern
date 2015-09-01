#pragma once
#include <iostream>
#include "Pizza2.h"
#include "PizzaIngredientFactory.h"
class CheesePizza2 :
	public Pizza2
{
private:
	PizzaIngredientFactory *pif;
public:
	CheesePizza2(PizzaIngredientFactory *f);
	void prepare();
	~CheesePizza2();
};

