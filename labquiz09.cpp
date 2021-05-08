/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: labquiz 09
 *
 * Lab Quiz 09 - Brackets define int unbalanced_brackets(string input), return difference of unbalanced open and closed brackets. Ex: input “{{}” returns 1, “{}}}}” returns -3, “}{}{{{“ returns 2
 */

#include <iostream>
using namespace std;

int unbalanced_brackets(string input) {
    int count = 0;
    for (auto ch : input) {
        if (ch == '{') {
            count++;
        }
        if (ch == '}') {
            count--;
        }
    }
    return count;
}


int main() {
    cout << unbalanced_brackets("{}}}}") << endl;
    return 0;
}
