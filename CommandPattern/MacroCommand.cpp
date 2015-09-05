#include "MacroCommand.h"



MacroCommand::MacroCommand(Command** c,int count)
{
	commands = c;
	this->commandsCount = count;
}

void MacroCommand::Execute()
{
	for (int i = 0; i < this->commandsCount; i++)
	{
		commands[i]->Execute();
	}
}

void MacroCommand::Undo()
{
}


MacroCommand::~MacroCommand()
{
}
