/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 3B

using 3 additional libraries to handle tsv data
to print min/max result to the input date

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

    string date;
    double eastSt, eastEl, westSt, westEl, minVal, maxVal;
    minVal = 10000;
    maxVal = 0;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 

        if (eastSt < minVal) {
            minVal = eastSt;
        }
        if (eastSt > maxVal) {
            maxVal = eastSt;
        }

    }

    cout << "minimum storage in East basin: " << minVal << " billion gallons" << endl;

    cout << "MAXimum storage in East basin: " << maxVal << " billion gallons" << endl;

    fin.close();

    return 0;
}