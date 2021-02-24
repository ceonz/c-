/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 4G

Print out starts receiving prompts (row col)
using the checkerboard

*/


#include <iostream>
using namespace std;
int main() {
    int width, height;
    cout << "Please input width: " << endl;
    cin >> width;
    cout << "Please input height: " << endl;
    cin >> height;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((row / 3 + col / 3) % 2 == 0) { // row and col are odd or even at the same time.
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