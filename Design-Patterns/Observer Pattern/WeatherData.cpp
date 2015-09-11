#include "WeatherData.h"


WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
	observers.clear();
}


// 옵저버 등록
void WeatherData::registerObserver(IObserver* const o){
	observers.push_back(o);
}
// 옵저버 해제
void WeatherData::removeObserver(IObserver* const o){
	observers.remove(o);
}
// 변경사항 전달
void WeatherData::notifyObserver(){
	for each (IObserver* o in observers)
	{
		o->update(temperature, humidity, pressure);
	}
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	//printf("setMeasurements 호출 %.2f / %.2f / %.2f\n", temperature, humidity, pressure);

	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;

	notifyObserver();
}
