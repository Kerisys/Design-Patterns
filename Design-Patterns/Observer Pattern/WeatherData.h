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

	virtual void registerObserver(IObserver* const o) override;	// 옵저버 등록
	virtual void removeObserver(IObserver* const o) override;	// 옵저버 해제
	virtual void notifyObserver() override;	// 변경사항 전달
	void setMeasurements(float temperature, float humidity, float pressure);
};

