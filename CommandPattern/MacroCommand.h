#pragma once
#include "Command.h"
class MacroCommand :
	public Command
{
private:
	Command** commands;
	int commandsCount;
public:
	MacroCommand(Command** c,int count);
	void Execute();
	void Undo();
	~MacroCommand();
};

