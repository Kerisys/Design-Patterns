#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <stdio.h>

class IObserver
{
public:
	// Subject�� ����Ǹ� ȣ��ȴ�.
	virtual void update(float temperature, float humidity, float pressure) = 0;
};

#endif _OBSERVER_H_