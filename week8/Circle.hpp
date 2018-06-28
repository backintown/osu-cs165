/**********************************
 ** Author: Alex Cheng
 ** Date: 5/23/2018
 ** Description:
This is the header file for the Circle class. It has a static member
variable called maxRadius and a member variable radius. The default constructor
sets radius to 1. It has a static member function called setMaxRadius and a
member function called calcArea to calculate the area. It has an exception class
called IllegalRadius which has a member variable called badRadius and a
constructor that takes in a value and sets it to badRadius.
***********************************/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle {
private:
  static double maxRadius;
  double radius;

public:
  class IllegalRadius {
  public:
    double badRadius;
    IllegalRadius(double rad) { badRadius = rad; };
  };
  Circle() { radius = 1.0; };
  Circle(double);
  double calcArea();
  static void setMaxRadius(double);
};

#endif
