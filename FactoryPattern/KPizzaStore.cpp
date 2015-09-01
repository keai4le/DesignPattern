#include "KPizzaStore.h"
#include "KStyleCheesePizza.h"


KPizzaStore::KPizzaStore()
{
}

Pizza * KPizzaStore::createPizza(std::string type)
{
	if (type == "cheese")
	{
		return new KStyleCheesePizza();
	}
	return nullptr;
}


KPizzaStore::~KPizzaStore()
{
}
