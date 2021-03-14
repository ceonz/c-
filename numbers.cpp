/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab 5F
 *
 * write a function that returns the smallest twin prime greater than n
 * Change the main function to test new code
 */

#include <iostream>
using namespace std;


// Function prototypes
bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);
bool isTwinPrime(int n);
int nextTwinPrime(int n);

int main() {
    cout << nextTwinPrime(5) << endl;
    return 0;
}

int nextTwinPrime(int n) {
    n++;
    while (!nextPrime(n) && !isTwinPrime(n)) {
        n++;
    }
    return n;
}

bool isTwinPrime(int n) {
    if (isPrime(n) and (isPrime(n - 2) or isPrime(n + 2))) {
        return true;
    }
    return false;

}

int countPrimes(int a, int b) {
    int counter = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) { // if you found a prime incremenet ounter by 1
            counter++;
        }
    }
    return counter;
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
