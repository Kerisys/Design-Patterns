#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using std::cout;
using std::endl;

MallardDuck::MallardDuck()
{
	cout << "MallardDuck ����" << endl;
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}


MallardDuck::~MallardDuck()
{
	delete flyBehavior;
	flyBehavior = NULL;
	delete quackBehavior;
	quackBehavior = NULL;
	cout << "MallardDuck ����" << endl;
}


// MallardDuck �Դϴ�.
void MallardDuck::Display()
{
	cout << "MallardDuck �Դϴ�." << endl;
}
