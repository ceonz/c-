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

struct Triangle {
    Point a;
    Point b;
    Point c;
};

double distance(Point a, Point  b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return sqrt((dx * dx) + (dy * dy));
}

double perimeter(Triangle t) {
    double d1 = distance(t.a, t.b);
    double d2 = distance(t.a, t.c);
    double d3 = distance(t.b, t.c);
    return d1 + d2 + d3;
}

int main() {
    Point p1{ 1.0, 2.0 };
    Point p2{ 2.0, 3.0 };
    Point p3{ 3.0 , 4.0 };
    Triangle t{ p1, p2, p3 };
    cout << perimeter(t) << endl;

    return 0;
}
