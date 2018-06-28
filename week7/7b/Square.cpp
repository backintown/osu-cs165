/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This is the implementation file for the Square class. The default
    constructor calls the Rectangle class default constructor. The regular
    constructor takes in one double and calls the Rectangle constructor with
    both arguments set to the specified input since all sides of a square are
    equal. The setLength and setWidth methods are overridden and uses the
    Rectangle methods to set both length and width to the same input value.
***********************************/

#include "Square.hpp"
// #include <iostream>

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