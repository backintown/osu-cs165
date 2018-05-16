
#include "Square.hpp"
#include <iostream>

Square::Square() : Rectangle() {}

Square::Square(double side) : Rectangle(side, side) {}

void Square::setLength(double side) {
  Rectangle::setLength(side);
  Rectangle::setWidth(side);
}

void Square::setWidth(double side) {
  Rectangle::setLength(side);
  Rectangle::setWidth(side);
}

// int main() {
//   Square *sq = new Square();
//   Square *sq2 = new Square(2);
//   std::cout << sq->area() << std::endl;
//   std::cout << sq2->area() << std::endl;
//   sq->setLength(5);
//   std::cout << sq->area() << std::endl;
//   sq->setWidth(4);
//   std::cout << sq->area() << std::endl;
// }