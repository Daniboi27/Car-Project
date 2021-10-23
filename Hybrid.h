/* 
    Programmers: Jonothan De la O and Daniel Emerson
    Course: CPTR 212
    Program Description: Hybrid car class
    Last Changed: 10/21/2021
*/
#include <iostream>
#include "EV.cpp"
#include "EV.h"
using namespace std;

class Hybrid: public EV
{
    public:
        // Declaring input
        void input();
        // Declaring output
        void output();
        // Declaring duel engine economy
        float duelEngineCalculation(int _latestTripDistanceTravelled, float _kWhCapacity, float _gasolineCapacity);

        // Constructor with 3 parameters
        Hybrid(int _latestTripDistanceTravelled, float _kWhCapacity, float _gasolineCapacity);
        // Default constructor
        Hybrid();

        // Friend function for two cars
        friend string compare(Hybrid kiaOptimia, Hybrid hondaAccord);
        
        // Declaring Mutators
        void setLatestTripDistanceTravelled(float _latestTripDistanceTravelled);
        void setkWhCapacity(float _kWhCapacity);
        void setGasolineCapacity(float _gasolineCapacity);

        // Declaring Accessors
        float getLatestTripDistanceTravelled();
        float getkWhCapacity();
        float getGasolineCapacity();

    private:
        // Member variables
        float latestTripDistanceTravelled;
        float kWhCapacity;
        float gasolineCapacity;
};