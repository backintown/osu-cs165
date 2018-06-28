/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This is the header file for the abstract Shape class.
    It has two virtual member functions called area and perimeter that each
    subclass will overwrite.
***********************************/

#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
};

#endif
