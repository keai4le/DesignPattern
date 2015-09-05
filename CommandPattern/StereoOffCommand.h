#pragma once
#include "Command.h"
#include "Stereo.h"
class StereoOffCommand :
	public Command
{
private:
	Stereo *stereo;
public:
	StereoOffCommand(Stereo *stereo);
	void Execute();
	void Undo();
	~StereoOffCommand();
};

