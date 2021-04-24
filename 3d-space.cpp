/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: LAB9C
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
void move(Coord3D* ppos, Coord3D* pvel, double dt) {
    ppos->x = ppos->x + (pvel->x * dt);
    ppos->y = ppos->y + (pvel->y * dt);
    ppos->z = ppos->z + (pvel->z * dt);
}


int main() {
    Coord3D pos = { 0, 0, 100.0 };
    Coord3D vel = { 1, -5, 0.2 };

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}
