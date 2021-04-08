/*
Date: 4/8/21
Author: Wayne Kwiat
Description:

*/


#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    bool driving = true;
    Odometer car1_OD;
    FuelGauge car1_FG;

    for (int i = 0; i < 15; i++) {
        car1_FG.addFuel();
    }

    cout << "******    The car is full of gas, let's get driving!    ******" << endl;

    while (car1_FG.getFuel() > 0)
    {
        if (car1_OD.getMileage() % 24 == 0) {
            cout << "Current Fuel Level: " << car1_FG.getFuel() << endl;
            cout << "Current Mileage is: " << car1_OD.getMileage() << endl;
            car1_OD.addMileage();
            car1_FG.subFuel();
        }
        else
            car1_OD.addMileage();
    }

    cout << "You have run out of gas!" << endl;

    return 0;

}

