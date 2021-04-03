#ifndef FUELGAUGE
#define FUELGAUGE

#include <iostream>
using namespace std;

class FuelGauge
{
private:
    int fuel_level;

public:

    FuelGauge()
    {
        fuel_level = 0;
    }

    int getFuel()
    {
        return fuel_level;
    }

    void addFuel()
    {
        if (fuel_level == 15)
            cout << "The tank is full!" << endl;
        else
            fuel_level++;
        cout << "The fuel Level is: " << fuel_level << endl;
    }

    void subFuel()
    {
        if (fuel_level == 0)
            cout << "The tank is empty!" << endl;
        else
            fuel_level--;
    }
};

#endif // !FUELGAUGE

