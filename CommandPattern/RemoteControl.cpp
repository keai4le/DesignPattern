#include "RemoteControl.h"

RemoteControl::RemoteControl()
{
	Command* c = new NoCommand();
	for (int i = 0; i < 7; i++)
	{
		onCommands[i] = c;
		offCommands[i] = c;
	}
	this->unDoCommand = c;
}
void RemoteControl::SetCommand(int slot, Command* onCommand, Command* offCommands)
{
	this->onCommands[slot] = onCommand;
	this->offCommands[slot] = offCommands;
}

void RemoteControl::OnButtonWasPressed(int slot)
{
	this->onCommands[slot]->Execute();
	unDoCommand = onCommands[slot];
}

void RemoteControl::OffButtonWasPressed(int slot)
{
	this->offCommands[slot]->Execute();
	unDoCommand = offCommands[slot];
}

void RemoteControl::UndoButtonWasPressed()
{
	unDoCommand->Undo();
}

void RemoteControl::PartyButtonWasPressed()
{
	this->partyCommand->Execute();
}

void RemoteControl::SetPartyCommands(Command* c)
{
	this->partyCommand = c;
}


RemoteControl::~RemoteControl()
{
}
