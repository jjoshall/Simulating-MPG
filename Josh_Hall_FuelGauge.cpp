#include <iostream>
#include <iomanip>
#include "C:\\Users\\jjosh\\Downloads\\Materials\\Comp Sci Labs\\Odometer Assignment\\Fuel\\Josh_Hall_FuelGauge.h"

using namespace std;

/// Comment 7) Here is the constructor for the class. It sets gasAmount to 0.
Fuel::Fuel()
{
    int gasAmount = 0;
}

/// Comment 8) This function returns how much gas is in the tank.
int Fuel::gasCount()
{

    return gasAmount;
}

/// Comment 9) This function adds gas to the tank by incrementing it by one and returning that value.
int Fuel::addGas()
{
    return (gasAmount++);
}

/// Comment 10) This function takes gas out of the tank by decrementing the gasAmount variable by 1.
int Fuel::minusGas()
{
    if (gasAmount <= 0)
    {
        cout << "There is no more gas." << endl;
        return 0;
    }
    else
        return (gasAmount--);
}
