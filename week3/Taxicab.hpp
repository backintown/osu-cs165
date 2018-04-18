/********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description:
    The Taxicab class function header specification file.
    The class has three member variables, X,Y coordinates and distance traveled.
    Two constructors, default and one that takes two integers.
    Accessor functions for each variable and two mutator functions for X,Y and
    distance traveled.
 ********************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab {
private:
  int XCoord;
  int YCoord;
  int distanceTraveled;

public:
  Taxicab();
  Taxicab(int, int);
  int getXCoord();
  int getYCoord();
  int getDistanceTraveled();
  void moveX(int);
  void moveY(int);
};

#endif