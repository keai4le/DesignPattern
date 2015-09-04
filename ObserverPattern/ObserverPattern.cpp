// ObserverPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "weatherData.h"
#include "CurrentConditionsDisplay.h"

int main()
{
	weatherData *w=new weatherData();
	CurrentConditionsDisplay *c = new CurrentConditionsDisplay(w);
	w->setMeasurements(1.1f, 1.1f, 2.2f);
	w->notifyObserver();
    return 0;
}

