#include "SingleTonClass2.h"



SingleTonClass2::SingleTonClass2()
{
}

SingleTonClass2 * SingleTonClass2::getInstance()
{
	static SingleTonClass2 singleTon;
	return &singleTon;
}


SingleTonClass2::~SingleTonClass2()
{
	std::cout << "Îö¹¹" << std::endl;
}
