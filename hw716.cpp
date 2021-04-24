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
    double dy = b.y - a.y;
    return sqrt((dx * dx) + (dy * dy));
}

int main() {
    Point p1{ 1.0, 2.0 };
    Point p2{ 2.0, 3.0 };
    cout << distance(p1, p2) << endl;

    return 0;
}
