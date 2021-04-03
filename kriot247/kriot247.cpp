/*
Date: 4/2/21
Author: Wayne Kwiat
Description:
For this assignment you will design a set of classes that work together to simulate a car’s fuel gauge and odometer.
Demonstrate the classes by creating instances of each. Simulate filling the car up with fuel, and then run a loop that increments the odometer until the car runs out of fuel.
During each loop iteration, print the car’s current mileage and amount of fuel.
*/


#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
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

