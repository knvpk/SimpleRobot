#include <iostream>
#include "Robot.h"

int main()
{

       Robot robot_1("20220518A01", 4, "RoboSense32", true, 0, 0);
       Robot::ShowManufactuer();
       robot_1.ShowSerialNo();
       Robot::ShowNumberOfRobotsExisting();   // 1
 
       Location loc1 = robot_1.base.GetLocation();
       cout << "The intial location is: " << "(" << loc1.GetX() << ", " << loc1.GetY() << ")" << endl;
 
       robot_1.base.MoveX(3);
       robot_1.base.MoveY(-5);
       robot_1.base.ShowInfo(); Robot robot_2("20220518B03", 6, "Ouster64", false, 10, 10);
       Robot::ShowManufactuer();
       robot_2.ShowSerialNo();
       Robot::ShowNumberOfRobotsExisting();   // 2
       robot_2.base.MoveX(20);
       robot_2.base.MoveY(-10);
       robot_2.base.ShowInfo();

}