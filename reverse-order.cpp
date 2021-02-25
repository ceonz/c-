/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Ldb 3D

This program asks the user to input two dates(earlier date then later date)
Then it should report the west basin elevation for all days.


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
    string eDate, lDate;
    cout << "Enter the earlier date: ";
    cin >> eDate;
    cout << "Enter the later date: ";
    cin >> lDate;

    string junk;
    getline(fin, junk);

    string date;
    double eastSt, eastEl, westSt, westEl;

    string date_arr[370];
    double elevation[370];
    int size = 0;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        if (eDate <= date && lDate >= date) {
            date_arr[size] = date;
            elevation[size] = westEl;
            size++;
        }
    }
    fin.close();

    for (int i = size - 1; i >= 0; i--) {
        cout << date_arr[i] << " " << elevation[i] << "ft" << endl;
    }

    return 0;

}