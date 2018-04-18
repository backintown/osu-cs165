/********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description: The Box class function implementation file.
 ********************************/

#include "Box.hpp"

/***********************
 * Box default constructor
 * set all member variables to 1
 **********************/

Box::Box() {
  setHeight(1);
  setWidth(1);
  setLength(1);
}

/***********************
 * Box constructor
 * set all member variables to the corresponding arguments
 **********************/

Box::Box(double height, double width, double length) {
  setHeight(height);
  setWidth(width);
  setLength(length);
}

/***********************
 * Box::setHeight
 * sets height to the input argument
 **********************/

void Box::setHeight(double heightIn) { height = heightIn; }

/***********************
 * Box::setWidth
 * sets height to the input argument
 **********************/

void Box::setWidth(double widthIn) { width = widthIn; }

/***********************
 * Box::setLength
 * sets height to the input argument
 **********************/

void Box::setLength(double lengthIn) { length = lengthIn; }

/***********************
 * Box::calcVolume
 * returns a double that's the volume of the box
 **********************/

double Box::calcVolume() {
  double volume = height * width * length;
  return volume;
}

/***********************
 * Box::calcVolume
 * returns a double that's the surface area of the box
 **********************/

double Box::calcSurfaceArea() {
  double surfaceArea = (2 * width * length)+(2*length*height)+(2*width*height);
  return surfaceArea;
}
