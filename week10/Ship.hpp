/****************************
 ** Date: 6/6/2018
 ** Author: Alex Cheng
 ** Description:
    This is the header file for the class Ship. Each ship has a name, length,
and damage taken member variables. It has a constructor that takes a name and
length. It has getter functions for each member variable. It has a takeHit
function that increments the damage taken.
****************************/

#include <string>
using std::string;
#ifndef SHIP_HPP
#define SHIP_HPP

class Ship {
private:
  string name;
  int length;
  int damage;

public:
  Ship(string, int);
  string getName();
  int getLength();
  int getDamage();
  void takeHit();
};

#endif
