/**********************************
 ** Date: 5/23/2018
 ** Author: Alex Cheng
 ** Description:
 This program asks the user for a maxRadius and sets maxRadius using the static
 function for Circle. It then asks the user for a radius and creates a Circle
 object with that radius. If the radius is greater than maxRadius, an
 IllegalRadius exception will be thrown and the program will display the bad
 radius. If the object is created successfully, it will display the area of the
 circle using calcArea.
 **********************************/

#include "Circle.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  double rad = 0, maxRad = 0;
  Circle::setMaxRadius(10.0);
  cout << "Enter the maxRadius for Circles." << endl;
  cin >> maxRad;
  Circle::setMaxRadius(maxRad);
  cout << "Enter the radius for a new Circle object." << endl;
  cin >> rad;
  try {
    Circle circle(rad);
    cout << "The Circle object was successfully created." << endl;
    cout << "The area of the circle is " << circle.calcArea() << "." << endl;
  } catch (Circle::IllegalRadius IllegalRadiusException) {
    cout << "The Circle object could not be created." << endl;
    cout << "A radius of " << IllegalRadiusException.badRadius
         << " exceeds the maximum allowed radius." << endl;
  }
  return 0;
}
