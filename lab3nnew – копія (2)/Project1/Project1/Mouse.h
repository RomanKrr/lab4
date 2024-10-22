#pragma once
#include"InputDevice.h"
#include"Device.h"

class Mouse : public Device, public InputDevice 
{
public:
	int dpi;
	bool wireless;

	Mouse(string n, string b, int y, string dV, string sT, int d, bool w);

	using Device::displayInfo;
	using Device::showDeviceCount;

	void displayMouseInfo();

	~Mouse();
};

