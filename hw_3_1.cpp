/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: HW 3_1

Write a program that reads an integer
and prints whether it is negative, zero, or positive.

*/

#include <iostream>
using namespace std;

int main() {
    int out1;
    cout << "Enter an integer: ";
    cin >> out1;

    if (out1 > 0) {
        cout << "positive" << endl;
    }
    else if (out1 < 0) {
        cout << "negative" << endl;
    }
    else {
        cout << "zero" << endl;
    }

    return 0;
}