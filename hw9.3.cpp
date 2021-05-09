/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: HW9.3
 *
 * Simulate a circuit for controlling a hallway light that has switches at both
 * ends of the hallway. Each switch can be up or down, and the light can be on
 * or off. Toggling either switch turns the lamp on or off. Provide member
 * functions
 */

#include <iostream>
using namespace std;

class Circuit {
public:
  int get_first_switch_state(); // 0 for down, 1 for up
  int get_second_switch_state();
  int get_lamp_state(); // 0 for off, 1 for on
  void toggle_first_switch();
  void toggle_second_switch();

private:
  int first = 0;
  int second = 0;
  int lamp = 0;
};

int Circuit::get_first_switch_state() {
  return first;
}

int Circuit::get_second_switch_state() {
  return second;
}

int Circuit::get_lamp_state() {
  return lamp;
}

void Circuit::toggle_first_switch() {
  lamp = (lamp + 1) % 2;
  first = (first + 1) % 2;
}

void Circuit::toggle_second_switch() {
  lamp = (lamp + 1) % 2;
  second = (second + 1) % 2;
}

void printState(Circuit c) {
  cout << "Hallway State >> ";
  cout << "first: " << c.get_first_switch_state() << ", ";
  cout << "second: " << c.get_second_switch_state() << ", ";
  cout << "lamp: " << c.get_lamp_state() << " " << endl;
}

int main() {
  Circuit circuit;

  printState(circuit);

  cout << "Toggle first switch..." << endl;
  circuit.toggle_first_switch();
  printState(circuit);

  cout << "Toggle second switch..." << endl;
  circuit.toggle_second_switch();
  printState(circuit);

  cout << "Toggle first switch..." << endl;
  circuit.toggle_first_switch();
  printState(circuit);

  cout << "Toggle second switch..." << endl;
  circuit.toggle_second_switch();
  printState(circuit);

  cout << "Toggle first switch..." << endl;
  circuit.toggle_first_switch();
  printState(circuit);

  cout << "Toggle second switch..." << endl;
  circuit.toggle_second_switch();
  printState(circuit);

  return 0;
}
