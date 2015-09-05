#pragma once
class Command
{
public:
	Command();
	virtual void Execute()=0;
	virtual void Undo() = 0;
	~Command();
};

