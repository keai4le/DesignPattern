#include "LightOffCommand.h"




LightOffCommand::LightOffCommand(Light * light)
{
	this->light = light;
}

void LightOffCommand::Execute()
{
	this->light->Off();
}

void LightOffCommand::Undo()
{
	this->light->On();
}

LightOffCommand::~LightOffCommand()
{
}
