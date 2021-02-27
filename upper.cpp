/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 2E

Prints out stars upside down
in each separate lines.

*/

#include <iostream>
using namespace std;

int main() {
    int length;

    cout << "Input side length: ";
    cin >> length;
    cout << endl;

    for (int row = 0; row < length; row++) {
        for (int space = 0; space < row; space++) {
            cout << " ";
        }
        for (int col = 0; col < (length - row); col++) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}