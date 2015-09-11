#include "MuteQuack.h"

#include <iostream>
using std::cout;
using std::endl;

MuteQuack::MuteQuack()
{
	cout << "MuteQuack 생성" << endl;
}


MuteQuack::~MuteQuack()
{
	cout << "MuteQuack 제거" << endl;
}


void MuteQuack::quack()
{
	cout << "...(아무 소리도 나지 않는다)" << endl;
}
