/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 4C

use for loop to create
a cross shape with *

*/


#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Please input size: " << endl;
    cin >> size;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == col or row + col == size + 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}