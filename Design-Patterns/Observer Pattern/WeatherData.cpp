#include "WeatherData.h"


WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
	observers.clear();
}


// ������ ���
void WeatherData::registerObserver(IObserver* const o){
	observers.push_back(o);
}
// ������ ����
void WeatherData::removeObserver(IObserver* const o){
	observers.remove(o);
}
// ������� ����
void WeatherData::notifyObserver(){
	for each (IObserver* o in observers)
	{
		o->update(temperature, humidity, pressure);
	}
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	//printf("setMeasurements ȣ�� %.2f / %.2f / %.2f\n", temperature, humidity, pressure);

	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;

	notifyObserver();
}
