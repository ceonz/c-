/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1

using redirection to receive and read integers from randomly generated text file.
using while loop to iterate through numbers and outputs sum

*/

#include <iostream>
using namespace std;

int main()
{
    int s;
    int sum = 0;

    while (cin >> s)
    {
        sum = sum + s;
    }
    cout << sum << endl;

    return 0;
}
