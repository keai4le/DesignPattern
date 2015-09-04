#pragma once
#include <iostream>
class SingleTonClass2
{
public:
	SingleTonClass2();
	static SingleTonClass2* getInstance();
	~SingleTonClass2();
};

