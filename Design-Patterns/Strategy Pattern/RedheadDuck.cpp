#include "RedheadDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using std::cout;
using std::endl;

RedheadDuck::RedheadDuck()
{
	cout << "RedheadDuck ����" << endl;
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}


RedheadDuck::~RedheadDuck()
{
	delete flyBehavior;
	flyBehavior = NULL;
	delete quackBehavior;
	quackBehavior = NULL;
	cout << "RedheadDuck ����" << endl;
}


// RedheadDuck �Դϴ�.
void RedheadDuck::Display()
{
	cout << "RedheadDuck �Դϴ�." << endl;
}
