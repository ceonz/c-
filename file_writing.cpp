/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1

write a program that carries out the following tasks:
pseudo code below:

*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;

    //Open a file with the name hello.txt.
    file.open("hello.txt");

    //Store the message “Hello, World!” in the file.
    file << "Hello, World!" << endl;

    //Close the file.
    file.close();

    //Open the same file again.
    file.open("hello.txt");

    //Read the message into a string variable and print it.
    string str;
    getline(file, str);
    cout << str << endl;

    return 0;

}
