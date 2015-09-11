#include "Duck.h"
#include "FlyNoWay.h"

#include <iostream>
using std::cout;
using std::endl;

Duck::Duck()
{
	cout << "Duck ����" << endl;
}


Duck::~Duck()
{
	cout << "Duck ����" << endl;
}


// ����� ģ��
void Duck::Swim()
{
	cout << "��� ������ ���� ��ϴ�. ��¥ ������ ����" << endl;
}

// �в�
void Duck::performQuack()
{
	quackBehavior->quack();
}

// �������� ���ƴٴմϴ�.
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
