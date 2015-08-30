#include "weatherData.h"



weatherData::weatherData()
{;
}

void weatherData::registerObserver(Observer * o)
{
	this->Observers.push_back(o);
}

void weatherData::removeObserver(Observer * o)
{
	this->Observers.remove(o);
}


void weatherData::notifyObserver()
{
	for (Observer* o : Observers)
	{
		o->update(this->temperature,this->humidity,this->pressure);
	}
}

void weatherData::setMeasurements(float temp, float humi, float pressure)
{
	this->temperature = temp;
	this->humidity = humi;
	this->pressure = pressure;
}

weatherData::~weatherData()
{
}
