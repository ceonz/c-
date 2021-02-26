/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 4D

use for loop to create a
increment of *'s

*/


#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Please input size: ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) { // increment of 1 ex) i += 1
        for (int col = 0; col <= row; col++) { // increment of 2 ex) i += 2
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}