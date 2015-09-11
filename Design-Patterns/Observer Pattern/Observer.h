#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <stdio.h>

class IObserver
{
public:
	// Subject가 변경되면 호출된다.
	virtual void update(float temperature, float humidity, float pressure) = 0;
};

#endif _OBSERVER_H_