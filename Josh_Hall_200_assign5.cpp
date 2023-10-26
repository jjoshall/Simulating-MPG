#include <iostream>
#include <iomanip>
#include "Josh_Hall_FuelGauge.h"
#include "Josh_Hall_Odometer.h"
#include "Josh_Hall_FuelGauge.cpp"
#include "Josh_Hall_Odometer.cpp"

using namespace std;

/// Comment 1) Here are the constant variables I used. The max amount of gas is 15 gallons, the max miles was 999,999, and the miles per 15 gallons was 360 miles.
const int maxGas = 5;
const int maxMiles = 999999;
const int MPG = 120;

int main()
{
    /// Comment 2) Here I created the objects. One for the Fuel object (f), and another for the Odometer (m).
    Fuel f;
    Odometer m;

    /// Comment 3) I made a loop to add gas to the car. It goes to maxGas or 15 gallons as that is the max amount of gas the car can hold.
    for (int j = 0; j <= maxGas; j++)
    {
        f.addGas();
    }

    /// Comment 4) I made another loop that increments the mileage with every iteration. Every 24 miles, the fuel is decremented.
    for (int i = 0; i < MPG; i++)
    {
        m.addMileage(maxMiles, f);
        cout << "Mileage: " << m.mileage() << endl;
        cout << "Fuel Level: " << f.gasCount() << endl;
        system("pause");
    }

    return 0;
}
