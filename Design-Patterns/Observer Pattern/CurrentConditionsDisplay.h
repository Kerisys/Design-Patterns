#pragma once
#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
class CurrentConditionsDisplay :
	public IObserver , public IDisplayElement
{
private:
	float temperature;
	float humidity;
	ISubject* weatherData;

public:
	CurrentConditionsDisplay(ISubject& weatherData);
	~CurrentConditionsDisplay();

	virtual void update(float temperature, float humidity, float pressure) override;

	void display();
};

