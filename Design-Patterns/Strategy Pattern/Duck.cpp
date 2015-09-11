#include "Duck.h"
#include "FlyNoWay.h"

#include <iostream>
using std::cout;
using std::endl;

Duck::Duck()
{
	cout << "Duck 생성" << endl;
}


Duck::~Duck()
{
	cout << "Duck 제거" << endl;
}


// 헤엄을 친다
void Duck::Swim()
{
	cout << "모든 오리는 물에 뜹니다. 가짜 오리도 뜨죠" << endl;
}

// 꽥꽥
void Duck::performQuack()
{
	quackBehavior->quack();
}

// 오리들이 날아다닙니다.
void Duck::performFly()
{
	flyBehavior->fly();
}


void Duck::SetFlyBehavior(FlyBehavior* fb)
{
	delete flyBehavior;
	flyBehavior = fb;
}


void Duck::SetQuackBehavior(QuackBehavior* qb)
{
	delete quackBehavior;
	quackBehavior = qb;
}
