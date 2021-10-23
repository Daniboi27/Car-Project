/*

Programmer: Jonathan De la O, Daniel Emerson
Program: EV implementation
Date: Oct. 19, 2021
Last changed: Oct 21, 2021

*/

#include "EV.h"
using namespace std;

// Compare function definition 
bool compare(EV kiaNiro, EV TeslaModelX)
{
    if(kiaNiro.batteryEconomyCalculation(kiaNiro.getKWhCapacity(),kiaNiro.getLatestTripDistanceTravelled()) > TeslaModelX.batteryEconomyCalculation(TeslaModelX.getKWhCapacity(),TeslaModelX.getLatestTripDistanceTravelled()))
    {
        cout << "Kia Niro is a better option to buy" <<endl;
    }
    else if(kiaNiro.batteryEconomyCalculation(kiaNiro.getKWhCapacity(),kiaNiro.getLatestTripDistanceTravelled()) < TeslaModelX.batteryEconomyCalculation(TeslaModelX.getKWhCapacity(),TeslaModelX.getLatestTripDistanceTravelled()))
    {
        cout << "Tesla ModelX is a better option to buy" <<endl;
    }
    else if(kiaNiro.batteryEconomyCalculation(kiaNiro.getKWhCapacity(),kiaNiro.getLatestTripDistanceTravelled()) == TeslaModelX.batteryEconomyCalculation(TeslaModelX.getKWhCapacity(),TeslaModelX.getLatestTripDistanceTravelled()))
    {
        cout << "Both cars have the same performance" <<endl;
    }
    return 0;
}

// Mutator definition
void EV::set(int _kWhCapacity, float _chargingTime, int _drivingRange, string _make, string _model, int _year, float _odometerReading, float _latestTripDistanceTravelled)
{
    kWhCapacity = _kWhCapacity;
    chargingTime = _chargingTime;
    drivingRange = _drivingRange;
    make = _make;
    model = _model;
    year = _year;
    odometerReading = _odometerReading;
    latestTripDistanceTravelled = _latestTripDistanceTravelled;
}

// Definition of accessors

int EV::getKWhCapacity()
{
    return kWhCapacity;
}

float EV::getChargingTime()
{
    return chargingTime;
}

int EV::getDrivingRange()
{
    return drivingRange;
}

string EV::getMake()
{
    return make;
}

string EV::getModel()
{
    return model;
}

int EV::getYear()
{
    return year;
}

float EV::getOdometerReading()
{
    return odometerReading;
}

float EV::getLatestTripDistanceTravelled()
{
    return latestTripDistanceTravelled;
}

// Definition of batteryEconomyCalculation function
float EV::batteryEconomyCalculation(int _capacity, float _latestTripDistanceTravelled)
{
    kWhCapacity = _capacity;
    latestTripDistanceTravelled = _latestTripDistanceTravelled;

    return (latestTripDistanceTravelled / kWhCapacity);
}


// Constructor with 8 parameters
EV::EV(int _kWhCapacity, float _chargingTime, int _drivingRange, string _make, string _model, int _year, float _odometerReading, float _latestTripDistanceTravelled)
{
    kWhCapacity = _kWhCapacity;
    chargingTime = _chargingTime;
    drivingRange = _drivingRange;
    make = _make;
    model = _model;
    year = _year;
    odometerReading = _odometerReading;
    latestTripDistanceTravelled = _latestTripDistanceTravelled;

}  

// Output function definition
void EV::output(ostream& outs)
{
    outs << "Make: " << getMake() << endl;
    outs << "Model: " << getModel() << endl;
    outs << "Year: " << getYear() << endl;
    outs << "Odometer Reading: " << getOdometerReading()<< " M" << endl;
    outs << "kWh capacity: " << getKWhCapacity()<<endl;
    outs << "Driving range: " << getDrivingRange()<< endl;
    outs << "Charging time: " << getChargingTime()<<endl;
    outs << "Latest trip distance Travelled: " << getLatestTripDistanceTravelled()<<endl;
    outs << "The fuel economy calculation is: " << batteryEconomyCalculation(getKWhCapacity(), getLatestTripDistanceTravelled()) << " kWhPH " << endl;
}