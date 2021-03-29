/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab 7A
 *
 * This program includes a function
 * that removes indentation.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;


//prototype
string removeLeadingSpaces(string line);

string removeLeadingSpaces(string line) {
    //receive line as a parameter.
    //remove the leading spaces.
    //output the codes with the leading spaces removed.
    string ans;
    bool space_not_found = false;
    for (int i = 0; i < line.length(); i++) {
        if (!isspace(line[i])) {
            space_not_found = true;
        }
        if (space_not_found) {
            ans += line[i];
        }
    }
    return ans;
}

int main() {
    string line;

    while (getline(cin, line)) {
        cout << removeLeadingSpaces(line) << endl;
    }
    return 0;
}



