#include "Rectangle.hpp"
#include "Shape.hpp"
#include <iostream>
Rectangle::Rectangle() {
  setLength(1);
  setWidth(1);
}

Rectangle::Rectangle(double len, double wid) {
  setLength(len);
  setWidth(wid);
}

void Rectangle::setLength(double len) { this->length = len; }
void Rectangle::setWidth(double wid) { this->width = wid; }
double Rectangle::area() const { return length * width; }
double Rectangle::perimeter() const { return 2 * (length + width); }

// int main() {
//   Rectangle *rec = new Rectangle();
//   Rectangle *rec2 = new Rectangle(2, 3);
//   std::cout << rec->perimeter() << std::endl;
//   std::cout << rec2->perimeter() << std::endl;
//   rec->setLength(5);
//   std::cout << rec->perimeter() << std::endl;
// }