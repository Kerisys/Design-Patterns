#include "RedheadDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using std::cout;
using std::endl;

RedheadDuck::RedheadDuck()
{
	cout << "RedheadDuck 생성" << endl;
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}


RedheadDuck::~RedheadDuck()
{
	delete flyBehavior;
	flyBehavior = NULL;
	delete quackBehavior;
	quackBehavior = NULL;
	cout << "RedheadDuck 제거" << endl;
}


// RedheadDuck 입니다.
void RedheadDuck::Display()
{
	cout << "RedheadDuck 입니다." << endl;
}
