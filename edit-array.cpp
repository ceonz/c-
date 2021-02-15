/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: LAB 2-C

create an array named myData with values 1 using for loop
prompt two messages to assign value to print and the index of the array

*/

#include <iostream>
using namespace std;

int main() {
    int myData[10];

    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
    }
    // make array and fill it with 1

    int i;

    do {
        // print the array
        for (int i = 0; i < 10; i++) {
            cout << myData[i] << " ";
        }

        // get i and v from the user
        cout << endl << "Input index: ";
        cin >> i;

        int v;
        cout << "Input value: ";
        cin >> v;

        // if i is good, update the array at index i
        if (0 <= i and i < 10) {
            myData[i] = v;
        }
    } while (0 <= i and i < 10); // if the index was good, repeat
    cout << "Index out of range. Exit." << endl;

    return 0;
}