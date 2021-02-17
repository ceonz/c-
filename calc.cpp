/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1B

Read directly from the random text file with arithmetic operators
and outputs the result

*/

#include <iostream>

using namespace std;

int main() {

    int sum;
    char ch;
    int operand;

    cin >> sum; // first operand
    while (cin >> ch >> operand) { // calls for char and integer in order (>> skips through spaces)
        if (ch == '+') {
            sum += operand;  // sum = sum + operand
        }
        else if (ch == '-') {
            sum -= operand;
        } // while finishes end of the line of the operation.
    }
    cout << sum << endl;

    return 0;
}
