#pragma once
#include "Command.h"
class SimpleRemoteControl
{
private:
	Command* slot;
public:
	SimpleRemoteControl();
	void SetCommand(Command *command);
	void ButtonWasPressed();
	~SimpleRemoteControl();
};

