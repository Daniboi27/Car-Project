/*
 * Programmer : Jonathan De la O, Daniel Emerson
 * Course :CPTR 212
 * Description : Representation of the EV  
 * Indentation style: Allman style 
 * Date: October 19, 2021
 * Last changed : October 19, 2021. 10:32:16 PM
 * */

#include<iostream>
using namespace std;

class EV:public Car
{
    public:
        
        // Constructors with 8 parameters 
        EV(int _kWhCapacity,float _chargingTime, int _drivingRange, string _make, string _model, int _year, float _odometerReading, float _latestTripDistanceTravelled);
        // Default constructor 
        EV();

        
        // Declaring battery economy calculation function
        float batteryEconomyCalculation(int kWhCapacity, float latestTripDistanceTravelled);
        //Declaring output function to show result to user 
        void output(ostream& outs); 

        // Friend function
        friend bool compare(EV kiaNiro, EV TeslaModelX);
        // Compare the 2 objects of the class "Car" using the batteryEconomyCalculation. 
        // Return the best car, taking as parameters that the best one is the one that make the most miles per kWh

        
        //Mutator
        void set(int _kWhCapacity, float _chargingTime, int _drivingRange, string _make, 
            string _model, int _year, float _odometerReading, float _latestTripDistanceTravelled);
        // Is it okay to have only one mutator or multiple mutators 

        //Accessors
        int getKWhCapacity();
        float getChargingTime();
        int getDrivingRange();
        string getMake();
        string getModel();
        int getYear();
        float getOdometerReading();
        float getLatestTripDistanceTravelled();

    private:
        // Member variables
        int kWhCapacity;
        float chargingTime; 
        int drivingRange; 
        string make;
        string model;
        int year;
        float odometerReading;
		float latestTripDistanceTravelled;


    
};



