#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"
class Circle : public Shape {
private:
  double radius;

public:
  Circle() { radius = 1; };
  Circle(double);
  void setRadius(double);
  virtual double area() const override;
  virtual double perimeter() const override;
};

#endif
