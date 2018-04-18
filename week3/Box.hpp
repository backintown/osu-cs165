/********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description:
    The Box class function header specification file.
    The class has three member variables - height, width, and length.
    Two constructors, default and one that takes three doubles.
    Three mutator functions for each variable.
    Two functions that calculate volume and surface area.
 ********************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box {
private:
  double height;
  double width;
  double length;

public:
  Box();
  Box(double, double, double);
  void setHeight(double);
  void setWidth(double);
  void setLength(double);
  double calcVolume();
  double calcSurfaceArea();
};

#endif
