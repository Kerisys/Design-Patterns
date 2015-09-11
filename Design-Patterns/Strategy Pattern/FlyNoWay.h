#pragma once
#include "FlyBehavior.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay();
	virtual ~FlyNoWay();
	// 아무것도 하지 않음- 날 수 없음
	virtual void fly();
};

