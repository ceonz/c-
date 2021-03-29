/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab 7B
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;
string removeLeadingSpaces(string line);
int countChar(string line, char c);
void indent();

int main() {
    indent();
    return 0;
}

void indent() {

    string line;
    int open_braces = 0;
    int closed_braces = 0;
    int open_blocks = 0;
    int indentation_level = 0;

    while (getline(cin, line)) {
        line = removeLeadingSpaces(line);

        indentation_level = open_blocks;

        if (line[0] == '}') {
            indentation_level = open_blocks - 1;
        }
        for (int i = 0; i < indentation_level; i++) {
            cout << "\t";
        }
        open_braces = countChar(line, '{');
        closed_braces = countChar(line, '}');
        open_blocks += open_braces - closed_braces;
        cout << line << endl;
    }
}

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
int countChar(string line, char c) {
    int counter = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == c) {
            counter++;
        }
    }
    return counter;
}


