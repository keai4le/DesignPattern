#include "MoCha.h"



MoCha::MoCha(Beverage *beverage)
{
	this->beverage = beverage;
}

float MoCha::cost()
{
	return 0.2f+beverage->cost();
}

std::string MoCha::getDescription()
{
	return this->beverage->getDescription()+",MoCha";
}


MoCha::~MoCha()
{
}
