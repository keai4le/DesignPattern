#include "SingleTonClass.h"


SingleTonClass* SingleTonClass::s = NULL;
SingleTonClass::SingleTonClass()
{
}


SingleTonClass::~SingleTonClass()
{
}

SingleTonClass* SingleTonClass::getInstance()
{
	if (s == nullptr)
	{
		s = new SingleTonClass();
	}
	return s;
}

void SingleTonClass::test()
{
	std::cout << "function" << std::endl;
}
