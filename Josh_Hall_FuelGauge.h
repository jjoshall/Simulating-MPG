#ifndef JOSH_HALL_FUELGAUGE_H_INCLUDED
#define JOSH_HALL_FUELGAUGE_H_INCLUDED

/// Comment 5) Here is the class for Fuel with the member variables and functions.
class Fuel
{
private:
    int gasAmount = 0;
public:
    Fuel();
    int gasCount();
    int addGas();
    int minusGas();
};

#endif // JOSH_HALL_FUELGAUGE_H_INCLUDED
