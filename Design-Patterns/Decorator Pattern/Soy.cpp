#include "Soy.h"

Soy::Soy(Beverage* beverage)
{
	this->beverage = beverage;
}


Soy::~Soy()
{
	delete beverage;
}


string Soy::getDescription()
{
	return beverage->getDescription() + ", ����";
}


double Soy::cost()
{
	return beverage->cost() + 0.15;
}
