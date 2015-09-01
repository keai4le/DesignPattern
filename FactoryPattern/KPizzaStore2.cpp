#include "KPizzaStore2.h"



KPizzaStore2::KPizzaStore2()
{
}

Pizza2 * KPizzaStore2::createPizza()
{
	KPizzaIngredientFactory *kpf = new KPizzaIngredientFactory();
	return new CheesePizza2(kpf);
}


KPizzaStore2::~KPizzaStore2()
{
}
