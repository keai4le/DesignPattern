#pragma once
#include "Observer.h"
class Subject
{
public:
	virtual void registerObserver(Observer *o)=0;
	virtual void removeObserver(Observer *o)=0;
	virtual void notifyObserver()=0;
	Subject();
	~Subject();
};

