#include "KPizzaIngredientFactory.h"



KPizzaIngredientFactory::KPizzaIngredientFactory()
{
}

Shit * KPizzaIngredientFactory::createShit()
{
	return new KShit();
}


KPizzaIngredientFactory::~KPizzaIngredientFactory()
{
}
