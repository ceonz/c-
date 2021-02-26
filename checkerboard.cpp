/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 4B

Print out starts receiving prompts (row col)
by putting a space in between *

*/


#include <iostream>
using namespace std;
int main() {
    int width, height;
    cout << "Please input width: ";
    cin >> width;
    cout << "Please input height: ";
    cin >> height;
    cout << endl;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((row + col) % 2 == 0) {
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