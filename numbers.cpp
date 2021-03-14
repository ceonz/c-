/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab 5G
 *
 * write a function that returns twin prime in the range a <= N <= b
 * If there is no twin primes in range, then return -1
 */

#include <iostream>
using namespace std;


// Function prototypes
bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);
bool isTwinPrime(int n);
int largestTwinPrime(int a, int b);

int main() {
    cout << largestTwinPrime(2, 100) << endl;
    return 0;
}

int largestTwinPrime(int a, int b) {
    for (int i = b; i >= a; i--) {
        if (isTwinPrime(i)) {
            return i;
        }
    }
    return -1;
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
