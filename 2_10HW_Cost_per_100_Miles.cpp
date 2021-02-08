
/*
Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>

using namespace std;

int main()
{
    int gallons = 0;
    float fuel_efficiency = 0;
    int price = 0;

    //prompt in c++
    cout << "The number of gallons of gas in the tank: ";
    cin >> gallons;

    cout << "The fuel efficiency in miles per gallon: ";
    cin >> fuel_efficiency;

    cout << "The price of gas per gallon: ";
    cin >> price;

    //cost = (100 miles / fuel efficiency = gallons used for 100 miles) * price per gallon
    // if you are operating with divisions always declare variable as float
    float cost = (100 / fuel_efficiency) * price;

    //distance_traveled = current gallon * fuel efficiency
    int distance = gallons * fuel_efficiency;

    cout << cost << endl;
    cout << distance << endl;

    return 0;
}
