#pragma once
#include"Command.h"
class NoCommand:
	public Command
{
public:
	NoCommand();
	void Execute();
	void Undo();
	~NoCommand();
};

