/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 1D

calculates and prints
leap year and month
calculate
error fix

*/

#include <iostream>
using namespace std;

int main()
{
    int year, month, days;
    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month: ";
    cin >> month;

    if (month == 2) {
        if (year % 4 != 0)
        {
            days = 28;
        }
        else if (year % 100 != 0)
        {
            days = 29;
        }
        else if (year % 400 != 0)
        {
            days = 28;
        }
        else
        {
            days = 29;
        }
    }
    else if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) {
        days = 31;
    }
    else {
        days = 30;
    }

    cout << days << " days" << endl;

    return 0;
}