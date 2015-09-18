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
	return beverage->getDescription() + ", ���� ũ��";
}


double Whip::cost()
{
	return beverage->cost() + 0.10;
}
