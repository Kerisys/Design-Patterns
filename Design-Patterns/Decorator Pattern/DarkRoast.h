#pragma once
#include "Beverage.h"
class DarkRoast :
	public Beverage
{
public:
	DarkRoast();
	virtual ~DarkRoast();
	virtual double cost();
};
