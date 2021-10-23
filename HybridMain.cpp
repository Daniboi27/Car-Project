/* 
    Programmers: Jonothan De la O and Daniel Emerson
    Course: CPTR 212
    Program Description: Hybrid car class
    Last Changed: 10/21/2021
*/
#include "Hybrid.cpp"
using namespace std;
int main()
{
    // Declaring two cars
    Hybrid kiaOptimia, hondaAccord;
    // Getting the details for the Kia Optimia
    cout << "Enter the details for the Kia Optimia" << endl;
    kiaOptimia.input();
    // Getting the details for the Honda Accord
    cout << "Enter the details for the Honda Accord" << endl;
    hondaAccord.input();
    // Showing results of kiaOptimia object to user
    cout << "Kia Optimia details" << endl;
    kiaOptimia.output();
    // Showing results of kiaOptimia object to user
    cout << "Honda Accord details" << endl;
    hondaAccord.output();

    // Comparing which car is better.
    cout << "Which one is a better car?" << endl;
    if (compare(kiaOptimia, hondaAccord) == "kiaOptimia")
    {
        cout << "the Kia Optimia is a better car" << endl;
    }
    if (compare(kiaOptimia, hondaAccord) == "hondaAccord")
    {
        cout << "the Honda Accord is a better car" << endl;
    }
    if (compare(kiaOptimia, hondaAccord) == "either")
    {
        cout << "You can buy either car" << endl;
    }
    if (compare(kiaOptimia, hondaAccord) == "neither")
    {
        cout << "No calculation possible" << endl;
    }

    return 0;
};