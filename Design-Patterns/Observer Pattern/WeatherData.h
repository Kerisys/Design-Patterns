#pragma once
#include "Subject.h"
#include <list>

class WeatherData :
	public ISubject
{
private:
	std::list<IObserver*> observers;
	float temperature;
	float humidity;
	float pressure;

public:
	WeatherData();
	~WeatherData();

	virtual void registerObserver(IObserver* const o) override;	// ������ ���
	virtual void removeObserver(IObserver* const o) override;	// ������ ����
	virtual void notifyObserver() override;	// ������� ����
	void setMeasurements(float temperature, float humidity, float pressure);
};

