#pragma once
#include "Beverage.h"
class Decaf :
	public Beverage
{
public:
	Decaf();
	virtual ~Decaf();
	virtual double cost();
};

