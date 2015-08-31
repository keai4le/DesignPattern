#pragma once
#include <string>
class Beverage
{
protected:
	std::string description = "Unknown Beverage";
public:
	Beverage();
	virtual std::string getDescription();
	virtual float cost() = 0;
	~Beverage();
};

