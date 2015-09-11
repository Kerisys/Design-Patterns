#pragma once

// Behavior 라는 인터페이스를 제공하고 각 개체마다 다른 Behavior를 적용함으로써
// 같은 performQuack(),performFly() 함수를 호출함에도 각기 다른 결과를 도출한다.

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	FlyBehavior*	flyBehavior;
	QuackBehavior*	quackBehavior;
	Duck();
	virtual ~Duck();
	// 헤엄을 친다
	void Swim();
	// 모든 오리들의 모양이 다르기 때문에 추상 메소드.
	virtual void Display() = 0;
	// 꽥꽥
	void performQuack();
	// 오리들이 날아다닙니다.
	void performFly();
	void SetFlyBehavior(FlyBehavior* fb);
	void SetQuackBehavior(QuackBehavior* qb);
};

