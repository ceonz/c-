/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 3A

using 3 additional libraries to handle tsv data
to print out data in certain column in a certain date

*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>


using namespace std;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    string date, eastSt, eastEl, westSt, westEl;

    string input_date;
    cout << "Enter date: ";
    cin >> input_date;


    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 

        if (input_date == date) {
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
        }
    }

    fin.close();

    return 0;
}