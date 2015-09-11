#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using std::cout;
using std::endl;

MallardDuck::MallardDuck()
{
	cout << "MallardDuck 생성" << endl;
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}


MallardDuck::~MallardDuck()
{
	delete flyBehavior;
	flyBehavior = NULL;
	delete quackBehavior;
	quackBehavior = NULL;
	cout << "MallardDuck 제거" << endl;
}


// MallardDuck 입니다.
void MallardDuck::Display()
{
	cout << "MallardDuck 입니다." << endl;
}
