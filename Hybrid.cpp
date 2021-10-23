/* 
    Programmers: Jonothan De la O and Daniel Emerson
    Course: CPTR 212
    Program Description: Hybrid car class
    Last Changed: 10/21/2021
*/
#include "Hybrid.h"
using namespace std;

// Mutator definitions
void Hybrid::setLatestTripDistanceTravelled(float _latestTripDistanceTravelled)
{
    latestTripDistanceTravelled = _latestTripDistanceTravelled;
}
void Hybrid::setkWhCapacity(float _kWhCapacity)
{
    kWhCapacity = _kWhCapacity;
}
void Hybrid::setGasolineCapacity(float _gasolineCapacity)
{
    gasolineCapacity = _gasolineCapacity;
}

// Accessor definitions
float Hybrid::getLatestTripDistanceTravelled()
{
    return latestTripDistanceTravelled;
}

float Hybrid::getkWhCapacity()
{
    return kWhCapacity;
}

float Hybrid::getGasolineCapacity()
{
    return gasolineCapacity;
}

// Fuel economy of Hybrid car definition
float Hybrid::duelEngineCalculation(int _latestTripDistanceTravelled, float _kWhCapacity, float _gasolineCapacity)
{
    float fuelEconomy = _latestTripDistanceTravelled / ( _kWhCapacity + _gasolineCapacity);
    return(fuelEconomy);
}

// Choosing between engines
void Hybrid::input()
{
cout << "Please choose either your electric engine or your gasoline engine:" << endl;
cout << "[1] Electric engine" << endl << "[2] Gasoline engine" << endl;

string input;
getline(cin, input);

if (input == "1")
{
    cout << "You have selected the electric engine" << endl;
} 
else if (input == "2")
{
    cout << "You have selected the gasoline engine" << endl;
}
}