#pragma once
template<class T> class Enumeration
{
public:
	Enumeration() {};
	virtual bool HasMoreElements() = 0;
	virtual T NextElement() = 0;
	~Enumeration() {};
};

