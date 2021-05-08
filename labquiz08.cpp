/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: lab quiz 08
 *
 *Lab Quiz 08 - Define class Date, which contains public integer members year month day and string member day_of_week.
 *Define function `void printDate(Date * input)` that prints Date in format, day of week, mo/day/yr “Friday, 10/29/19” “Thursday, 1/3/18”
  */

#include <iostream>
using namespace std;

class Date {
public:
    int year, month, day;
    string day_of_week;
};

void printDate(Date* input) {
    cout << input->day_of_week + ", " << input->month << "/" << input->day << "/" << input->year << endl;
}

int main() {
    Date date;
    date.year = 2021;
    date.month = 5;
    date.day = 8;
    date.day_of_week = "Saturday";
    printDate(&date);

    return 0;
}
