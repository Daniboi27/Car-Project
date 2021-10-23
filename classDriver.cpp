/*
 * Programmers : Federico Poi and Thomas Norman
 * Course : CPTR 212
 * Description : Driver file for Car Class
 * Last Changed : Oct 20, 2021
 */

#include "Car.cpp"
int main()
{
    // Declaring two objects of class Car
    Car car1, car2;
    // Getting details and storing values in object car1
    cout << "Enter details of car 1" << endl;
    car1.input();
    // Getting details and storing values in object car2
    cout << "Enter details of car 2" << endl;
    car2.input();
    // Showing results of car1 object to user
    cout << "Car 1 details" << endl;
    car1.output();
    // Showing results of car1 object to user
    cout << "Car 2 details" << endl;
    car2.output();

    // Comparing and displaying to the user which car is better.
    cout << "Which one is a better car?" << endl;
    if (compare(car1, car2) == "car1")
    {
        cout << "Car 1 is a better car" << endl;
    }
    if (compare(car1, car2) == "car2")
    {
        cout << "Car 2 is a better car" << endl;
    }
    if (compare(car1, car2) == "either")
    {
        cout << "You can buy any car between the two" << endl;
    }
    if (compare(car1, car2) == "none")
    {
        cout << "No calculation possible" << endl;
    }

    return 0;
};