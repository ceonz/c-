/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: HW7.14
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};


double distance(Point a, Point  b) {
    double dx = b.x - a.x;
    double dy = b.y - b.y;
    return sqrt((dx * dx) + (dy * dy));
}

int main() {


    return 0;
}
