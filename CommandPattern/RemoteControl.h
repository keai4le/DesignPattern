#pragma once
#include "Command.h"
#include "NoCommand.h"
class RemoteControl
{
private:
	Command* onCommands[7];
	Command* offCommands[7];
public:
	RemoteControl();
	void SetCommand(int slot, Command* onCommand, Command* offCommands);
	
	void OnButtonWasPressed(int slot);
	void OffButtonWasPressed(int slot);
	~RemoteControl();
};

