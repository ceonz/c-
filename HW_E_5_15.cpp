/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: HW E5.15

Write a function sort that swaps its three arguments to arrange them in sorted order.
using multiple calls to sort 2 function on previous exercise.


*/

#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int c;
    c = a;
    a = b;
    b = c;
}

void sort3(int& a, int& b, int& c) {
    if (a < b and a < c) {
        //num 1 is the smallest
        if (b < c) {// a < b < c

        }
        else { // a < c < b
            swap(b, c);
        }

    }
    else if (b < a and b < c) {
        //num 2 is the smallest
        if (a < c) { // b < a < c
            swap(a, b);
        }
        else {
            // b < c < a
            swap(b, a);
            swap(c, b);
        }
    }
    else {//num 3 is the smallest
        if (a < b) {
            // c < a < b
            swap(c, a); // a < c < b
            swap(b, c);
        }
        else {
            // c < b < a
            swap(c, a);
        }
    }
}

int main() {
    //v<w<x o
    //v<x<w o
    //w<v<x o
    //w<x<v x    b<c <a
    //x<v<w o
    //x<w<v o


    int v = 3;
    int w = 1;
    int x = 2;
    sort3(v, w, x); // v is now 1, w is now 3, x is now 4

    cout << v << w << x << endl;

    return 0;

}