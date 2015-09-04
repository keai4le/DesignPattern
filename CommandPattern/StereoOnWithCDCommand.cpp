#include "StereoOnWithCDCommand.h"





StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *stereo)
{
	this->stereo = stereo;
}

void StereoOnWithCDCommand::Execute()
{
	stereo->On();
	stereo->SetCD("Take Me To Your Heart");
	stereo->SetVolume(20);
}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{
}
