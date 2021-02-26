/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Hw E3.5

This program prints increasing for three consecutive number in increasing order.
As above it prints decreasing, neither. (strong filter)

*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers with spaces: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 and num2 < num3) {
        // (num1 < num2 < num3 )wouldn't work because it would be as comparing num1 < num2 (boolean result - true(1) or false(0)) with num3 
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
