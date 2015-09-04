// CommandPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include <Windows.h>
#include "stdafx.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"
#include "RemoteControl.h"
#include "LightOffCommand.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
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
    return 0;
}
