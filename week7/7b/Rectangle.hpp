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
