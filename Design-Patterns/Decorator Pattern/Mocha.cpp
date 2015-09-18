#include "Mocha.h"

Mocha::Mocha(Beverage* _beverage)
{
	beverage = _beverage;
	
}


Mocha::~Mocha()
{
	delete beverage;
	
}


string Mocha::getDescription()
{
	return beverage->getDescription() + ", ¸ðÄ«";
}


double Mocha::cost()
{
	return beverage->cost() + 0.20;
}
