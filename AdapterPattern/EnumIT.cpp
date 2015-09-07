#include "EnumIT.h"



EnumIT::EnumIT(Enumeration<int> *em)
{
	this->em = em;
}

bool EnumIT::HasNext()
{
	return em->HasMoreElements();
}

int EnumIT::Next()
{
	return em->NextElement();
}


EnumIT::~EnumIT()
{
}
