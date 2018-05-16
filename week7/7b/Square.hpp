#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"
class Square : public Rectangle {
public:
  Square();
  Square(double side);
  virtual void setLength(double) override;
  virtual void setWidth(double) override;
};

#endif
