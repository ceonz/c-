/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 2B

Use for loop to iterate through integers between L and U
using i++ to express leap

*/

#include <iostream>
using namespace std;

int main() {
    int l, u;
    cout << "Please enter L: ";
    cin >> l;

    cout << "Please enter U: ";
    cin >> u;

    for (int i = l; i < u; i++) {
        cout << i << " ";
    }

    cout << endl;


    return 0;
}
