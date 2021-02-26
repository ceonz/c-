/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Hw E3.5

Write a program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” other- wise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.

*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers with spaces: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 and num2 < num3) {
        cout << "increasing" << endl;
    }
    else if (num1 > num2 and num2 > num3) {
        cout << "decreasing" << endl;
    }
    else {
        cout << "neither" << endl;
    }

    return 0;
}
