/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This is the header file for the Rectangle class. It inherits from the Shape
    class. It has a default and regular constructor. It has two protected member
    variables doubles called length and width and setter methods each. It has
    two functions inherited from the base class that it will override. The
    setter methods can also be overridden.
***********************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"
class Rectangle : public Shape {
protected:
  double length;
  double width;

public:
  Rectangle();
  Rectangle(double, double);
  virtual void setLength(double);
  virtual void setWidth(double);
  virtual double area() const override;
  virtual double perimeter() const override;
};

#endif
