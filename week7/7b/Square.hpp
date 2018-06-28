/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This is the header file for the Square class. It inherits from the Rectangle
    class. It has a default and regular constructor. It inherits the member
    variables from the Rectangle class. The setter methods for each variable are
    overridden. It also inherits the area and perimeter functions from the
    Rectangle class.
***********************************/

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
