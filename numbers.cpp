/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab - 5C

Write a function that returns smallest prime greater than n
for example) nextPrime(14) == 17

*/

#include <iostream>
using namespace std;

// Function prototypes
bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);

int main() {
    cout << nextPrime(14) << endl;
    cout << nextPrime(17) << endl;
    return 0;
}

int nextPrime(int n) {
    //Increment n 1 by 1 until you find a prime
    n++; // Increment n by 1 first. To avoid the case that n is a lso a prime number
    while (!isPrime(n)) {
        n++; // while n is not a prime, keep incrementing n by 1
    }
    return n;
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

