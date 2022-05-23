#pragma once

#include <String>
#include "MobileBase.h"

using namespace std;

class Robot
{
public:
	Robot(string serial, int numWheels, string LiDARType, bool withCam, int inital_X, int inital_Y);
	void ShowSerialNo();
	static void ShowManufactuer();
	static void ShowNumberOfRobotsExisting();

	MobileBase base;

private:
	static string robotManufactuer;
	static int numberofRobotsExisiting;
	string serialNumber;
};