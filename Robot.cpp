#include <iostream>
#include "Robot.h"
#include "MobileBase.h"
#include <string> 


using namespace std;


Robot ::Robot(string serial, int numWheels, string LiDARType, bool withCam, int inital_X, int inital_Y)
{
    MobileBase *base = new MobileBase(numWheels, LiDARType, withCam, inital_X, inital_Y);
    serialNumber = serial;
    numberofRobotsExisiting = numWheels;
}

void Robot::ShowSerialNo()
{
  cout << serialNumber << "\n";
}

void Robot::ShowManufactuer()
{
    cout << robotManufactuer << "\n";
}

void Robot::ShowNumberOfRobotsExisting()
{
    std::string s = std::to_string(numberofRobotsExisiting);
    cout << s << "\n";
}