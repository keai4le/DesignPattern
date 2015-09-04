#include "LightOffCommand.h"




LightOffCommand::LightOffCommand(Light * light)
{
	this->light = light;
}

void LightOffCommand::Execute()
{
	this->light->Off();
}

LightOffCommand::~LightOffCommand()
{
}
