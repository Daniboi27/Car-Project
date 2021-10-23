/*
 * Programmers : Federico Poi and Thomas Norman
 * Course : CPTR 212
 * Description : Implementation file for Car Class
 * Last Changed : Oct 20, 2021
 */

#include "Car.h"

using namespace std;
// Compare function definition
string compare(Car car1, Car car2)
{

    if (car1.getYear() > car2.getYear() && car1.getOdometerReading() < car2.getOdometerReading())
    {
        return "car1";
    }
    else if (car2.getYear() > car1.getYear() && car2.getOdometerReading() < car1.getOdometerReading())
    {
        return "car2";
    }
    else if (car1.getYear() == car2.getYear() && car2.getOdometerReading() == car2.getOdometerReading())
    {
        return "either";
    }
    else
    {
        return "none";
    }
}
// Input function definition
void Car::input()
{
    cout << "Enter make of the car" << endl;
    cin >> make;
    cout << "Enter model of the car" << endl;
    cin >> model;
    cout << "Enter year of the car" << endl;
    cin >> year;
    cout << "Enter the mileage of the car" << endl;
    cin >> odometerReading;
    cout << "Enter distance travelled" << endl;
    cin >> latestTripDistanceTravelled;
    cout << "Enter fuel capacity" << endl;
    cin >> fuelCapacity;
};
// Output function definition
void Car::output()
{
    cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    fuelEconomyComputation(latestTripDistanceTravelled, fuelCapacity);
}
// Fuel Economy Computation function definition
void Car::fuelEconomyComputation(int latestTripDistanceTravelled, float fuelCapacity)
{
    float fuelEconomy = latestTripDistanceTravelled / fuelCapacity;
    cout << "Your fuel economy is " << fuelEconomy << " miles per galloin" << endl;
};

// Constructor with 6 parameters definition
Car::Car(string _make, string _model, int _year, int _odometerReading, float _fuelCapacity, float _latestTripDistanceTravelled)
{
    make = _make;
    model = _model;
    year = _year;
    odometerReading = _odometerReading;
    fuelCapacity = _fuelCapacity;
    latestTripDistanceTravelled = _latestTripDistanceTravelled;
}
// Default Constructor definition
Car::Car()
{
    make = "";
    model = "";
    year = 0;
    odometerReading = 0;
    fuelCapacity = 0;
    latestTripDistanceTravelled = 0;
}

// Accessors functions definition
string Car::getModel()
{
    return model;
}
string Car::getMake()
{
    return make;
}
int Car::getYear()
{
    return year;
}

int Car::getOdometerReading()
{
    return odometerReading;
}

float Car::getFuelCapacity()
{
    return fuelCapacity;
}
float Car::getLatestTripDistanceTravelled()
{
    return latestTripDistanceTravelled;
}
// Mutators functions definition
void Car::setModel(string _model)
{
    model = _model;
}
void Car::setMake(string _make)
{
    make = _make;
}
void Car::setYear(int _year)
{
    year = _year;
}
void Car::setOdometerReading(int _odometerReading)
{
    odometerReading = _odometerReading;
}
void Car::setFuelCapacity(float _fuelCapacity)
{
    fuelCapacity = _fuelCapacity;
}
void Car::setLatestTripDistanceTravelled(float _latestTripDistanceTravelled)
{
    latestTripDistanceTravelled = _latestTripDistanceTravelled;
}