/*
 * Programmers : Federico Poi and Thomas Norman
 * Course : CPTR 212
 * Description : Interface file for Car Class
 * Last Changed : Oct 20, 2021
 */
#include <iostream>
using namespace std;
class Car
{
public:
    // Declaring input function to get values from user
    void input();
    // Declaring output function to show result to user
    void output();
    // Declaring fuel economy computation function
    void fuelEconomyComputation(int latestTripDistanceTravelled, float fuelCapacity);

    // Constructor with 6 parameters
    Car(string _make, string _model, int _year, int _odometerReading, float _fuelCapacity, float _latestTripDistanceTravelled);
    // Default constructor
    Car();

    // Friend function that compares two cars
    friend string compare(Car car1, Car car2);

    // Mutators
    void setModel(string model);
    void setMake(string make);
    void setYear(int year);
    void setOdometerReading(int odometerReading);
    void setFuelCapacity(float fuelCapacity);
    void setLatestTripDistanceTravelled(float latestTripDistanceTravelled);

    // Accessors
    string getModel();
    string getMake();
    int getYear();
    int getOdometerReading();
    float getFuelCapacity();
    float getLatestTripDistanceTravelled();

private:
    string model;
    string make;
    int year;
    int odometerReading;
    float fuelCapacity;
    float latestTripDistanceTravelled;
};