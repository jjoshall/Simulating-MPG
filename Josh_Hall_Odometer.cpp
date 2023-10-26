#include <iostream>
#include <iomanip>
#include "C:\\Users\\jjosh\\Downloads\\Materials\\Comp Sci Labs\\Odometer Assignment\\Fuel\\Josh_Hall_Odometer.h"

using namespace std;

/// Comment 11) This is the constructor for the Odometer class. It sets mileAmount to 0.
Odometer::Odometer()
{
    int mileAmount = 0;
}

/// Comment 12) This function returns how many miles the car has gone.
int Odometer::mileage()
{
    return mileAmount;
}

/// Comment 13) This function adds miles to the odometer by incrementing it by 1. If the amount of miles is divisible by 24,
/// then it decrements the amount of gas by 1.
int Odometer::addMileage(const int maxMiles, Fuel &f)
{
    if (mileAmount < maxMiles)
    {
        if (mileAmount % 24 == 0)
        {
            f.minusGas();
        }
        return (mileAmount++);
    }
    else
    {
        return (mileAmount = 0);
    }
}
