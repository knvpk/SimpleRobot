#pragma once

#include <String>
#include "Location.h"

using namespace std;

class MobileBase
{
public:
    MobileBase(int numWheels, string LiDARType, bool withCam, int initial_X, int initial_Y);
    void MoveX(int dist);
    void MoveY(int dist);
    Location GetLocation();
    void ShowInfo();

private:
    int numOfWheels;
    string LiDAR;
    bool withCamera;
    Location location;
};