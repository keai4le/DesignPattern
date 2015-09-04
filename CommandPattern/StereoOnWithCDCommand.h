#pragma once
#include "Command.h"
#include "Stereo.h"
class StereoOnWithCDCommand :
	public Command
{
private:
	Stereo *stereo;
public:
	StereoOnWithCDCommand(Stereo *stereo);
	void Execute();
	~StereoOnWithCDCommand();
};

