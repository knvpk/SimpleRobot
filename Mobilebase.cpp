#include <iostream>
#include "Location.h"
#include "Mobilebase.h"

MobileBase ::MobileBase(int numWheels, string LiDARType, bool withCam, int initial_X, int initial_Y)
{
    numOfWheels = numWheels;
    LiDAR = LiDARType;
    withCamera = withCam;
    Location *location = new Location(initial_X, initial_Y);
}

void MobileBase::MoveX(int dist)
{
    location.UpdateLocation(dist, 0);
}

void MobileBase::MoveY(int dist)
{
    location.UpdateLocation(0, dist);
}

Location MobileBase::GetLocation()
{
    return location;
}

void MobileBase::ShowInfo()
{
        std::string isWithCam = withCamera ? "Yes" : "No";
    cout << "MobileBase Info"
         << "\n";
    cout << "No of Wheels " << numOfWheels << "\n";
    cout << "No LiDARType " << LiDAR << "\n";
    cout << "Is with Camera " << isWithCam  << "\n";
    cout << "Location x is " << location.GetX() << " and Y is " << location.GetY() << "\n";
}
