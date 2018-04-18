/********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description: The Taxicab class function implementation file.
********************************/

#include "Taxicab.hpp"

/********************
 * Taxicab default constructor
 *******************/

Taxicab::Taxicab() {
  XCoord = 0;
  YCoord = 0;
  distanceTraveled = 0;
}

/********************
 * Taxicab constructor with parameters XIn and YIn for input coordinates.
 * Defaults distanceTraveled to 0.
 *******************/

Taxicab::Taxicab(int XIn, int YIn) {
  XCoord = XIn;
  YCoord = YIn;
  distanceTraveled = 0;
}

/********************
 * Taxicab::getXCoord
 * returns member variable XCoord
*********************/ 

int Taxicab::getXCoord() { return XCoord; }

/********************
 * Taxicab::getYCoord
 * returns member variable YCoord 
 *********************/

int Taxicab::getYCoord() { return YCoord; }

/********************
 * Taxicab::getDistanceTraveled
 * returns member variable distanceTraveled
 *********************/

int Taxicab::getDistanceTraveled() { return distanceTraveled; }

/********************
 * Taxicab::moveX
 * adds the input argument to XCoord.
 * adds the absolute value of the argument to the distance traveled.
 *********************/

void Taxicab::moveX(int XMove) {
  XCoord += XMove;
  // add absolute value of move to distance
  // I decided not to deal with cmath abs overloading.
  if (XMove < 0) {
    distanceTraveled -= XMove;
  } else {
    distanceTraveled += XMove;
  }
}

/********************
 * Taxicab::moveY
 * adds the input argument to YCoord.
 * adds the absolute value of the argument to the distance traveled.
 *********************/

void Taxicab::moveY(int YMove) {
  YCoord += YMove;
  if (YMove < 0) {
    distanceTraveled -= YMove;
  } else {
    distanceTraveled += YMove;
  }
}
