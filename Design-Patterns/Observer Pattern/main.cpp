#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main()
{
	WeatherData* weatherData = new WeatherData();
	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(*weatherData);

	weatherData->setMeasurements(80, 65, 30.4f);
	weatherData->setMeasurements(82, 70, 29.2f);
	weatherData->setMeasurements(78, 90, 29.3f);

	delete currentDisplay;
	delete weatherData;
	
	return 0;
}