/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 3C

Asks user to input two dates.
Print out the comparison(higher or the same)

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

    string junk;
    getline(fin, junk);

    string date, sDate, eDate;
    double eastSt, eastEl, westSt, westEl;

    cout << "Please enter the starting date: ";
    cin >> sDate;
    cout << "Please enter the ending date: ";
    cin >> eDate;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        if (date >= sDate and date <= eDate) {
            if (eastEl < westEl) {
                cout << date << " " << "West" << endl;
            }
            else if (eastEl > westEl) {
                cout << date << " " << "East" << endl;
            }
            else {
                cout << date << " " << "Equal" << endl;
            }
        }
    }
    fin.close();

    return 0;

}