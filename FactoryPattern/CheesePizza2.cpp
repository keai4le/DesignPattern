#include "CheesePizza2.h"



CheesePizza2::CheesePizza2(PizzaIngredientFactory *f)
{
	this->pif = f;
}

void CheesePizza2::prepare()
{
	std::cout << "preparing CheesePizza2!" << std::endl;
	this->s=this->pif->createShit();
}


CheesePizza2::~CheesePizza2()
{
}
