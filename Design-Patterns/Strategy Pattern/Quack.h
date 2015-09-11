#pragma once
#include "QuackBehavior.h"
class Quack :
	public QuackBehavior
{
public:
	Quack();
	virtual ~Quack();
	virtual void quack();
};

