/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Hw 9.1
 *
 *We want to add a button to the tally counter in Section 9.2 that allows *an
 *operator to undo an accidental button click. Provide a member function void
 *undo() that simulates such a button. As an added precaution, make sure that
 *the operator cannot click the undo button more often than the count button.
 */

#include <iostream>
using namespace std;

class Counter {
public:
  void reset();
  void count();
  int get_value() const;
  void undo();

private:
  int value;
};

void Counter::reset() {
  value = 0;
}

void Counter::count() {
  value = value + 1;
}
int Counter::get_value() const {
  return value;
}

void Counter::undo() {
  if (value > 0) {
    value = value - 1;
  }
}

int main() {
  Counter c;
  c.reset();
  c.count();
  c.count();
  c.count();
  cout << c.get_value() << endl;
  c.undo();
  c.undo();
  cout << c.get_value() << endl;
  c.undo();
  c.undo();
  cout << c.get_value() << endl;

  return 0;
}
