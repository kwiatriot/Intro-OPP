#ifndef ODOMETER
#define ODOMETER

#include <iostream>
#include "FuelGauge.h"
using namespace std;

class Odometer
{
private:
    int total_mileage;
    FuelGauge obj;

public:
    Odometer()
    {
        total_mileage = 0;
    }

    int getMileage()
    {
        return total_mileage;
    }

    void addMileage()
    {
        if (total_mileage == 999999)
            total_mileage = 0;
        else {
            total_mileage++;
        }
    }


};

#endif // !ODOMETER

