/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This program takes in a vector of different Shapes and returns the average
    area of the shapes.
***********************************/

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <iostream>
#include <vector>
using std::vector;

double averageArea(const vector<Shape *> &shapes) {
  double sum = 0;
  for (int i = 0; i < shapes.size(); i++) {
    sum += shapes[i]->area();
  }
  return sum / shapes.size();
}

// int main() {
//   Square *sq = new Square(5);
//   Rectangle *rect = new Rectangle(2, 3);
//   Circle *circ = new Circle();
//   vector<Shape *> shapes;
//   shapes.push_back(sq);
//   shapes.push_back(rect);
//   shapes.push_back(circ);
//   std::cout << sq->area() << std::endl;
//   std::cout << rect->area() << std::endl;
//   std::cout << circ->area() << std::endl;
//   std::cout << averageArea(shapes) << std::endl;

//   std::cout << sq->perimeter() << std::endl;
//   std::cout << rect->perimeter() << std::endl;
//   std::cout << circ->perimeter() << std::endl;
//   sq->setLength(10);
//   rect->setWidth(10);
//   circ->setRadius(2);
//   std::cout << averageArea(shapes) << std::endl;
//   std::cout << sq->perimeter() << std::endl;
//   std::cout << rect->perimeter() << std::endl;
//   std::cout << circ->perimeter() << std::endl;
//   return 0;
// }
