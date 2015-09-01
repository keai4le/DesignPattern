#pragma once
#include "Shit.h"
#include <iostream>
class Pizza2
{
private:
	char* name;
protected:
	Shit* s;
public:
	Pizza2();
	virtual void prepare() = 0;
	void bake();
	void cut();
	void box();
	void setName(char* name);
	char* getName();
	~Pizza2();
};

