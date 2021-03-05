/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab - 5A

create a function that if n is divisible by d
return true, otherwise return false


*/

#include <iostream>
using namespace std;

// Function prototypes
bool isDivisibleBy(int n, int d);

int main() {
}

bool isDivisibleBy(int n, int d) {
    if (d == 0) {
        return false;
    }
    if (n % d == 0) {
        return true;
    }
    return false;
}