/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 1

prompts user to input to integers and prints out the smallest integer

*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (num1 < num2)
    {
        cout << "The smaller of the two is " << num1 << endl;
    }
    else
    {
        cout << "The smaller of the two is " << num2 << endl;
    }

    return 0;
}
