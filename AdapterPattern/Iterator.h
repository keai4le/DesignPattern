#pragma once
template<class T> class Iterator
{
public:
	Iterator() {};
	virtual bool HasNext()=0;
	virtual T Next()=0;
	~Iterator() {};
};

