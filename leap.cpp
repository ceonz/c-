/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 1C

calculates and prints
leap year

*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    /*
    if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)
    */

    if (year % 4 != 0)
    {
        cout << "common year" << endl;
    }
    else if (year % 100 != 0)
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "leap year" << endl;
    }

    return 0;
}
