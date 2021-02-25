/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: LdbQuiz_2

This program receives two input
and outputs bigger of those two integers


*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (num1 > num2) {
        cout << "The larger of the two is " << num1;
    }
    else {
        cout << "The larger or the two is " << num2;
    }

    return 0;

}