#include "StereoOffCommand.h"





StereoOffCommand::StereoOffCommand(Stereo * stereo)
{
	this->stereo = stereo;
}

void StereoOffCommand::Execute()
{
	std::cout << "Stereo Is turning Off" << std::endl;
}

void StereoOffCommand::Undo()
{
	this->stereo->On();
}

StereoOffCommand::~StereoOffCommand()
{
}
