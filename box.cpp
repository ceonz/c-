/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 4a

using redirection to receive and read integers from randomly generated text file.
using while loop to iterate through numbers and outputs sum

*/

#include <iostream>
using namespace std;
int main() {
    int width, height;
    cout << "Please input width: ";
    cin >> width;
    cout << "Please input height: ";
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}