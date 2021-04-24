/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: LAB9E
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

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z);

// free memory
void deleteCoord3D(Coord3D* p);

void move(Coord3D* ppos, Coord3D* pvel, double dt) {
    ppos->x = ppos->x + (pvel->x * dt);
    ppos->y = ppos->y + (pvel->y * dt);
    ppos->z = ppos->z + (pvel->z * dt);
}


int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D* ppos = createCoord3D(x, y, z);

    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D* pvel = createCoord3D(x, y, z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: "
        << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
Coord3D* createCoord3D(double x, double y, double z) {
    Coord3D* ppos = new Coord3D{ x, y, z };
    return ppos;
}
void deleteCoord3D(Coord3D* p) {
    delete p;
    p = nullptr;
}
