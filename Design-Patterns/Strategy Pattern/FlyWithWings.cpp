#include "FlyWithWings.h"

#include <iostream>
using std::cout;
using std::endl;

FlyWithWings::FlyWithWings()
{
	cout << "FlyWithWings 생성" << endl;
}


FlyWithWings::~FlyWithWings()
{
	cout << "FlyWithWings 제거" << endl;
}


// 오리가 나는 것을 구현
void FlyWithWings::fly()
{
	cout << "날고 있어요!" << endl;
}
