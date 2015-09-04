#pragma once
#include <iostream>
class SingleTonClass
{
private:
	SingleTonClass();
	static SingleTonClass *s;
public:
	~SingleTonClass();
	static SingleTonClass* getInstance();
	void test();
};

