#include "Coffee.h"
#include <iostream>
using namespace std;
int main()
{
	Beverage* beverage1 = new Espresso();
	cout << beverage1->getDescription() << "\t$" << beverage1->cost() << endl;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << "\t$" << beverage2->cost() << endl;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << "\t$" << beverage3->cost() << endl;

	delete beverage1,beverage2, beverage3;

	return 0;
}