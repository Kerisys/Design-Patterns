#pragma once
#include "FlyBehavior.h"
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	virtual ~FlyWithWings();
	// ������ ���� ���� ����
	virtual void fly();
};

