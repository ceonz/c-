/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 2D

Prints out Fibonacci sequence
in each separate lines.

*/

#include <iostream>
using namespace std;

int main() {

    // make an array
    int fib[60];
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    // and all the following ones can be computed iteratively as

    for (int i = 2; i < 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }



    for (int i = 0; i < 60; i++) {
        cout << fib[i] << endl;
    }


    return 0;
}