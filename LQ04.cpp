/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab quiz 04
 *
*Lab Quiz 04 - Reading Files: Open and read a file called "data.txt", which contains lines of text with names of colors and their RGB values,
*like this: red FF0000 etc... Read and print each line. Close the file after processing it.
 */

#include <iostream>
#include <fstream>

using namespace std;
/**
 1. Open file and read the file
 2. iterate through each lines and print each lines(getline?)
 3. Close the file after the above is done.
  */


int main() {

    ifstream fin("data.txt");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
