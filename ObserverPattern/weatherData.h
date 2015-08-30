#pragma once
#include "Subject.h"
#include <list>
class weatherData :
	public Subject
{
private:
	std::list<Observer*> Observers;
	float temperature;
	float humidity;
	float pressure;
public:
	weatherData();
	void registerObserver(Observer *o);
	void removeObserver(Observer *o);
	void notifyObserver();
	void setMeasurements(float temp, float humi, float pressure);
	~weatherData();
};

