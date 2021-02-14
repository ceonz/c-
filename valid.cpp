/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: LAB 2-A

using While loop to iterate through numbers until the input is integer
otherwise keep showing the message "please re-enter tne number"

*/

#include <iostream>
using namespace std;

main() {
    int n;

    cout << "Please enter an integer: ";
    cin >> n;

    while (n <= 0 or n >= 1000) {
        cout << "Please re-enter: ";
        cin >> n;
    }

    cout << "Number squared is " << n * n << endl;

    return 0;
}