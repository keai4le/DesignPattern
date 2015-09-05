#pragma once
#include "Command.h"
#include "NoCommand.h"
class RemoteControl
{
private:
	Command* onCommands[7];
	Command* offCommands[7];
	Command* unDoCommand;
	Command* partyCommand;
public:
	RemoteControl();
	void SetCommand(int slot, Command* onCommand, Command* offCommands);
	
	void OnButtonWasPressed(int slot);
	void OffButtonWasPressed(int slot);
	void UndoButtonWasPressed();
	void PartyButtonWasPressed();
	void SetPartyCommands(Command* c);
	~RemoteControl();
};

