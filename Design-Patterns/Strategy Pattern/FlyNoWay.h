#pragma once
#include "FlyBehavior.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay();
	virtual ~FlyNoWay();
	// �ƹ��͵� ���� ����- �� �� ����
	virtual void fly();
};

