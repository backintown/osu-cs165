/**********************************
 ** Author: Alex Cheng
 ** Date: 5/23/2018
 ** Description:
This is the implementation file for the Circle class. The constructor
will create an instance of Circle with radius set to the input value. If the
constructor is called with a value greater than maxRadius, an IllegalRadius
exception class will be thrown and badRadius will be set to the input radius.
***********************************/

#include "Circle.hpp"

double PI = 3.14159;
double Circle::maxRadius = 10.0;
Circle::Circle(double rad) {
  if (rad > Circle::maxRadius) {
    throw IllegalRadius(rad);
  }
  radius = rad;
}

double Circle::calcArea() { return PI * radius * radius; }
void Circle::setMaxRadius(double rad) { Circle::maxRadius = rad; }