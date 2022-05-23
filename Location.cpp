#include "Location.h"

Location ::Location(int x_val, int y_val)
{
    x = x_val;
    y = y_val;
}

void Location::UpdateLocation(int x_change, int y_change)
{
    x = x + x_change;
    y = y + y_change;
}


int Location::GetX()
{
    return x;
}

int Location::GetY()
{
    return y;
}