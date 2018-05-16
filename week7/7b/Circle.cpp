#include "Circle.hpp"
#include "Shape.hpp"
#include <iostream>

double PI = 3.14159;

Circle::Circle(double radius) { setRadius(radius); }
void Circle::setRadius(double radius) { this->radius = radius; }
double Circle::area() const { return PI * radius * radius; }
double Circle::perimeter() const { return PI * radius * 2; }

// int main() {
//   Circle *circle = new Circle();
//   Circle *circ2 = new Circle(2);
//   std::cout << circle->area() << std::endl;
//   std::cout << circ2->area() << std::endl;
//   circle->setRadius(3);
//   std::cout << circle->area() << std::endl;
//   std::cout << circle->perimeter() << std::endl;
//   return 0;
// }