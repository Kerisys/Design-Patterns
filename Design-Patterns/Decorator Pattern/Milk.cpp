#include "Milk.h"

Milk::Milk(Beverage* beverage)
{
	this->beverage = beverage;
}


Milk::~Milk()
{
	delete beverage;
}


string Milk::getDescription()
{
	return beverage->getDescription() + ", ½ºÆÀ ¹ÐÅ©";
}


double Milk::cost()
{
	return beverage->cost() + 0.10;
}
