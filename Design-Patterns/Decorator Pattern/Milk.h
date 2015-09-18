#pragma once
#include "CondimentDecorator.h"
class Milk :
	public CondimentDecorator
{
	Beverage* beverage;
public:
	Milk(Beverage* beverage);
	virtual ~Milk();
	virtual string getDescription();
	virtual double cost();
};

