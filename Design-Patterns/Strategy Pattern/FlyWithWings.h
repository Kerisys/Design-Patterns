#pragma once
#include "FlyBehavior.h"
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	virtual ~FlyWithWings();
	// 오리가 나는 것을 구현
	virtual void fly();
};

