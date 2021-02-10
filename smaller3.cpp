/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 1B

Asks the user to input three integer numbers,
and prints out the smallest of the three

*/

#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 < num2 and num1 < num3)
    { //num 1 is the smallest
        cout << "The smaller of the three is " << num1 << endl;
    }
    else if (num2 < num1 and num2 < num3)
    { //num 2 is the smallest
        cout << "The smaller of the three is " << num2 << endl;
    }
    else
    { //num3 is the smallest
        cout << "The smaller of the three is " << num3 << endl;
    }

    return 0;
}