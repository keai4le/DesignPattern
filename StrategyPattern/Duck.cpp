#include "Duck.h"
#include "FlyWithWings.h"


Duck::Duck()
{
	this->flyBehavior = new FlyWithWings();
}

void Duck::perforFly()
{
	flyBehavior->fly();
}

void Duck::setFlyBehavior(FlyBehavior *fb)
{
	this->flyBehavior = fb;
}


Duck::~Duck()
{
}
