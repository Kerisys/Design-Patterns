#pragma once
#include "CondimentDecorator.h"
class Whip :
	public CondimentDecorator
{
	Beverage* beverage;
public:
	Whip(Beverage* beverage);
	virtual ~Whip();
	virtual string getDescription();
	virtual double cost();
};

