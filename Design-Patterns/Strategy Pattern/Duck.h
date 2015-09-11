#pragma once

// Behavior ��� �������̽��� �����ϰ� �� ��ü���� �ٸ� Behavior�� ���������ν�
// ���� performQuack(),performFly() �Լ��� ȣ���Կ��� ���� �ٸ� ����� �����Ѵ�.

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	FlyBehavior*	flyBehavior;
	QuackBehavior*	quackBehavior;
	Duck();
	virtual ~Duck();
	// ����� ģ��
	void Swim();
	// ��� �������� ����� �ٸ��� ������ �߻� �޼ҵ�.
	virtual void Display() = 0;
	// �в�
	void performQuack();
	// �������� ���ƴٴմϴ�.
	void performFly();
	void SetFlyBehavior(FlyBehavior* fb);
	void SetQuackBehavior(QuackBehavior* qb);
};

