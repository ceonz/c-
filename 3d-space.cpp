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
}
Coord3D* fartherFromOrigin(Coord3D* p1, Coord3D* p2) {
    if (length(p1) > length(p2)) {
        return p1;
    }
    else {
        return p2;
    }
}

int main() {
    Coord3D pointP = { 10, 20, 30 };
    Coord3D pointQ = { -20, 21, -22 };

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D* ans = fartherFromOrigin(&pointP, &pointQ);

    cout << "ans = " << ans << endl; // So which point is farther?

    return 0;
}
