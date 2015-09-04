#include "RemoteControl.h"

RemoteControl::RemoteControl()
{
	Command* c = new NoCommand();
	for (int i = 0; i < 7; i++)
	{
		onCommands[i] = c;
		offCommands[i] = c;
	}
}
void RemoteControl::SetCommand(int slot, Command* onCommand, Command* offCommands)
{
	this->onCommands[slot] = onCommand;
	this->offCommands[slot] = offCommands;
}

void RemoteControl::OnButtonWasPressed(int slot)
{
	this->onCommands[slot]->Execute();
}

void RemoteControl::OffButtonWasPressed(int slot)
{
	this->offCommands[slot]->Execute();
}


RemoteControl::~RemoteControl()
{
}
