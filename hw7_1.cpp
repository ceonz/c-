/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: HW 7.1
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <iostream>
using namespace std;

void sort2(double* p, double* q);



int main() {
    double p = 3, q = 2;
    sort2(&p, &q);
    cout << p << q << endl;

    return 0;
}

void sort2(double* p, double* q) {

    if (*p > *q) {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}