#ifndef JOSH_HALL_ODOMETER_H_INCLUDED
#define JOSH_HALL_ODOMETER_H_INCLUDED

/// Comment 6) Here is the class for the Odometer with all of the member variables and functions.
class Odometer
{
private:
    int mileAmount = 0;
public:
    Odometer();
    int mileage();
    int addMileage(const int, Fuel&);
};

#endif // JOSH_HALL_ODOMETER_H_INCLUDED
