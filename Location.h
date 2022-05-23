#pragma once

class Location
{
public:
    Location(int x_val = 0, int y_val = 0);

    void UpdateLocation(int x_change, int y_change);
    int GetX();
    int GetY();

private:
    int x, y;
};