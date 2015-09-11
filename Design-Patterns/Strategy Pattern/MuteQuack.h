#pragma once
#include "QuackBehavior.h"
class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack();
	virtual ~MuteQuack();
	virtual void quack();
};

