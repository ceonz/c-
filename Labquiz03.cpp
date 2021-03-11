/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Labquiz 03

Initialize an array of numbers 1-10.
Uses cout to print each number on a separate line


*/

#include <iostream>
using namespace std;

int main()
{
    // create an array size of 10
    // put 1- 10 to each index [0-9]
    // use for loop to iterate to print each index 0-9 with endl;

    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // int type array arr with size 10.
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
