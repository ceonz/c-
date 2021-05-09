/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: HW 9.5
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <iostream>
using namespace std;

class Rectangle {
public:
  Rectangle(double, double);
  double get_perimeter();
  double get_area();
  void resize(double factor);

private:
  double width;
  double height;
};

Rectangle::Rectangle(double w, double h) : width(w), height(h) {
}

double Rectangle::get_perimeter() {
  return 2 * (width + height);
}

double Rectangle::get_area() {
  return width * height;
}

void Rectangle::resize(double factor) {
  width = width * factor;
  height = height * factor;
}

int main() {
  Rectangle rect{5, 5};

  cout << "Perimeter of 5x5 Rect: " << rect.get_perimeter() << endl; // 20
  cout << "Area of 5x5 Rect: " << rect.get_area() << endl;           // 25

  cout << "Resize x2..." << endl;
  rect.resize(2);

  cout << "Perimeter of 10x10 Rect: " << rect.get_perimeter() << endl; // 40
  cout << "Area of 10x10 Rect: " << rect.get_area() << endl;           // 100

  return 0;
}
