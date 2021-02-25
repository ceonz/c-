/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: HW 4-8-1

This program reads a word
and prints each character of the word on a separate line.


*/

#include <iostream>
using namespace std;

int main() {

    string word;
    cout << "Enter the word to print: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << endl;
    }

    return 0;

}