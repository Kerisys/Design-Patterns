#include "Whip.h"

Whip::Whip(Beverage* beverage)
{
	this->beverage = beverage;
}


Whip::~Whip()
{
	delete beverage;
}


string Whip::getDescription()
{
	return beverage->getDescription() + ", ÈÖÇÎ Å©¸²";
}


double Whip::cost()
{
	return beverage->cost() + 0.10;
}
