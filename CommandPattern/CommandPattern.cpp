// CommandPattern.cpp : 定义控制台应用程序的入口点。
//
#include <Windows.h>
#include "stdafx.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"
#include "RemoteControl.h"
#include "LightOffCommand.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
#include "MacroCommand.h"
#define LIGHT 0
#define FAN 1
#define CD 2
int main()
{
	Light *l = new Light();
	Stereo *s = new Stereo();
	LightOnCommand *lightOnCommand = new LightOnCommand(l);
	LightOffCommand *lightOffCommand = new LightOffCommand(l);
	StereoOffCommand *stereoOffCommand = new StereoOffCommand(s);
	StereoOnWithCDCommand *stereoOnWithCDCommand = new StereoOnWithCDCommand(s);
	RemoteControl rc;
	rc.SetCommand(LIGHT,lightOnCommand,lightOffCommand);
	rc.SetCommand(CD, stereoOnWithCDCommand, stereoOffCommand);
	rc.OnButtonWasPressed(LIGHT);
	rc.OffButtonWasPressed(LIGHT);
	rc.OnButtonWasPressed(CD);
	rc.OffButtonWasPressed(CD);
	rc.UndoButtonWasPressed();
	std::cout << "--------------Party Begins-----------------" << std::endl;
	Command* commands[2];
	commands[0] = lightOffCommand;
	commands[1] = stereoOnWithCDCommand;
	MacroCommand* m = new MacroCommand(commands, 2);
	rc.SetPartyCommands(m);
	rc.PartyButtonWasPressed();
    return 0;
}

