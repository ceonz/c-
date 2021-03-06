/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab - 5B

create a function that if n is prime number then
return true, otherwise return false


*/

#include <iostream>
using namespace std;

// Function prototypes
bool isDivisibleBy(int n, int d);
bool isPrime(int n);

int main() {
    cout << isPrime(1) << endl;
    cout << isPrime(6) << endl;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (isDivisibleBy(n, i)) {
            return false;
        }
    }
    return true;
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