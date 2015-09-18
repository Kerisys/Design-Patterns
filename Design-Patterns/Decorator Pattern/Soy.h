#pragma once
#include "CondimentDecorator.h"
class Soy :
	public CondimentDecorator
{
	Beverage* beverage;
public:
	Soy(Beverage* beverage);
	virtual ~Soy();
	virtual string getDescription();
	virtual double cost();
};

