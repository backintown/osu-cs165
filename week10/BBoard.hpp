/**********************************
 ** Date: 6/6/2018
 ** Author: Alex Cheng
 ** Description:
    This is the header file for the class BBoard. It has two 10x10 2-D array
variables. The 'attacked' variable is a boolean array that keeps track of which
squares have been attacked. The 'ships' variable is an array of Ship pointers
that keeps track of which squares are occupied by ships. The unsunkShips
variable keeps track of how many ships are still alive.

    The class has a default constructor that initializes the board. It has
getter functions for each board variable that returns the element at the input
coordinates. It has a getter function for unsunkShips. The 'placeShip' function
takes in a pair of coordinates, a ship, and an orientation and places a ship on
the ships array if possible. The 'attack' function takes in a pair of
coordinates and records an attack at that position. The allShipsSunk function
tells you if all ships are sunk. The print functions display the boards.
*********************************/

#include "Ship.hpp"

#ifndef BBOARD_HPP
#define BBOARD_HPP

const int ROWS = 10;
const int COLS = 10;
class BBoard {
private:
  bool attacked[ROWS][COLS];
  Ship *ships[ROWS][COLS];
  int unsunkShips;

public:
  BBoard();
  bool getAttacksArrayElement(int, int);
  Ship *getShipsArrayElement(int, int);
  int getNumShipsRemaining();
  bool placeShip(Ship *, int, int, char);
  bool attack(int, int);
  bool allShipsSunk();
  void print(int, int);
  void printBool();
};

#endif
