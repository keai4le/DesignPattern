#pragma once
#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include <iostream>
class CurrentConditionsDisplay :
	public Observer,
	public DisplayElement
{
private:
	Subject *weatherData;
	float temperature;
	float humidity;
public:
	CurrentConditionsDisplay(Subject *weatherData);
	CurrentConditionsDisplay();
	void display();
	void update(float temp, float humidity, float pressure);
	~CurrentConditionsDisplay();
};

