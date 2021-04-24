/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab 9F
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <iostream>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

class Particle {
public:
    double x;
    double y;
    double z;
    double vx;
    double vy;
    double vz;
};


// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z,
    double vx, double vy, double vz) {
    Particle* p = new Particle;
    p->x = x;
    p->y = y;
    p->z = z;
    p->vx = vx;
    p->vy = vy;
    p->vz = vz;
    return p;
}
// set its velocity to (vx, vy, vz)
void setVelocity(Particle* p, double vx, double vy, double vz) {
    p->vx = vx;
    p->vy = vy;
    p->vz = vz;
}
// get its current position
Coord3D getPosition(Particle* p) {
    Coord3D coord;
    coord.x = p->x;
    coord.y = p->y;
    coord.z = p->z;
    return coord;
}
// update particle's position after elapsed time dt
void move(Particle* p, double dt) {
    p->x = p->x + dt * p->vx;
    p->y = p->y + dt * p->vy;
    p->z = p->z + dt * p->vz;
}
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle* p) {
    delete p;
}

int main() {
    // make new particle
    Particle* p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while (time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
            << getPosition(p).x << ", "
            << getPosition(p).y << ", "
            << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
}