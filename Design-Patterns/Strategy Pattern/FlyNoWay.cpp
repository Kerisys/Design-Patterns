#include "FlyNoWay.h"

#include <iostream>
using std::cout;
using std::endl;

FlyNoWay::FlyNoWay()
{
	cout << "FlyNoWay 생성" << endl;
}


FlyNoWay::~FlyNoWay()
{
	cout << "FlyNoWay 제거" << endl;
}


// 아무것도 하지 않음- 날 수 없음
void FlyNoWay::fly()
{
	cout << "날 수 없어요" << endl;
}
