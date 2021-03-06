/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: HW E5.14

Write a function void sort2(a,b) that swaps the values of a and b
if a is greater than b and otherwise leaves a and b unchanged.

*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b) {
    if (a > b) {
        int c;
        c = a;
        a = b;
        b = c;
    }
}
// how argument is delivered to parameters within function
// 1. call by value (without &) a value copied and delivered
// 2. call by reference

int main() {
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
    sort2(u, v); // u is still 2, v is still 3 
    sort2(w, x); // w is now 1, x is now 4

    cout << u << v << w << x << endl;
}