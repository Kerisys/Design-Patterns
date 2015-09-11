#include "CurrentConditionsDisplay.h"
#include <stdio.h>

CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject& weatherData)
{
	this->weatherData = &weatherData;
	weatherData.registerObserver(this);
}


CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
	//printf("update È£Ãâ %.2f / %.2f / %.2f\n", temperature, humidity, pressure);
	this->temperature = temperature;
	this->humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display()
{
	printf("Current conditions : %.2fF degrees and %.2f%% humidity\n\n", temperature, humidity);
}