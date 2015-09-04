#pragma once
#include <iostream>
#include <string>
class Stereo
{
public:
	Stereo();
	void On();
	void SetCD(std::string cdName);
	void SetVolume(int i);
	void Off();
	~Stereo();
};

