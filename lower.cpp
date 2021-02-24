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
    cout << "Please input size: " << endl;
    cin >> size;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row >= row) {
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