/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1C

using redirection to receive and read integers from randomly generated text file.
using while loop to iterate through numbers and outputs sum for each line

*/

#include <iostream>

using namespace std;

int main() {

    int sum;
    char ch;
    int operand;

    /*
    1. The main difference between string and character(문자) is that string contains "null" at the end of the word, which means the end of the string(문자열)

    2. when declare variable the order follows as : type, variable ...

    3. Before initializing a variable, it has "garbage value" = unpredictable previous value from a memory.

    4. To avoid above, either initialize variable or allocate certain value on the variable before using it.

    5. Below prints "hello" only bc when computer reads through string it reads until null charactor(considered end of the string = AKA \0 = null escape)
    ex) string str = "hello\0 world";
        cout << str;

    6. string = double quotes("") , char = single quotes('')

    */



    cin >> sum; // first operand
    while (cin >> ch >> operand) { // calls for char and integer in order (cin>> skips through spaces)
        if (ch == '+') {
            sum += operand;  // sum = sum + operand
        }
        else if (ch == '-') {
            sum -= operand;
        } // while finishes end of the line of the operation.
        else if (ch == ';') {
            cout << sum << endl;
            sum = operand;

        }
    }
    cout << sum << endl;

    return 0;
}