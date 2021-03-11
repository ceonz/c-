/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: HW - E6.8

Write a function bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order.

*/

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size);

int main()
{
    int a[3] = { 1,2,3 };
    int b[3] = { 1,2,3 };
    cout << equals(a, 3, b, 3) << endl;

    return 0;
}

bool equals(int a[], int a_size, int b[], int b_size) {
    // compare size
        // a_size == b_size (true)
    // compare elements
        // for loop 

    if (a_size != b_size) {
        return false;
    }
    for (int i = 0; i < a_size; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;


}



