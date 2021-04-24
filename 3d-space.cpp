/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: LAB9A
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};


double length(Coord3D* p) {
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
};

int main() {
    Coord3D pointP = { 10, 20, 30 };
    cout << length(&pointP) << endl;

    return 0;
}
