/***********************************
 ** Date: 6/6/2018
 ** Author: Alex Cheng
 ** Description:
    This is the class implementation file for BBoard. The constructor
initializes 'attacked' and 'ships' board with false and nullptr respectively.
getAttacksArrayElement returns the boolean at the input coordinates.
getShipsArrayElement returns the ship pointer at the input coordinates.
getNumShipsRemaining returns unsunkShips. allShipsSunk returns true all
unsunkShips = 0. print functions print out the boards.

    placeShip takes in a ship pointer, coordinates, and an orientation and
attemps to place a ship at the coordinates and increment unsunkShips. If there's
any overlap with another ship, it will return false.

    attack takes in a pair of coordinates and attacks that coordinate. If there
was a ship there and that square has not already been hit, then it will
increment the ship's damage and check if it has been sunk. Otherwise it will
return false.

************************************/

#include "BBoard.hpp"
#include <iostream>

/*
constructor - intializes the boards with false and nullptr
*/
BBoard::BBoard() {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      attacked[i][j] = false;
      ships[i][j] = nullptr;
    }
  }
  unsunkShips = 0;
}

/*
getAttacksArrayElement - check if the square has been attacked at the input
coordinates
*/
bool BBoard::getAttacksArrayElement(int row, int col) {
  return attacked[row][col];
}

/*
getShipsArrayElement - returns the ship at the input coordinates
*/
Ship *BBoard::getShipsArrayElement(int row, int col) { return ships[row][col]; }

/*
getNumShipsRemaining - returns the number of unsunkShips
*/
int BBoard::getNumShipsRemaining() { return unsunkShips; }

/*
placeShip - Takes in a ship, coordinates, and an orientaion. First loops through
the board in the specified orientation to check if there's space available to
place a ship. If there is, then it is safe to place a ship, increment
unsunkShips and return true, otherwise return false
*/
bool BBoard::placeShip(Ship *ship, int row, int col, char orientation) {

  /* check if we can place a ship so we don't have to roll back changes to the
   * board if we find a square that's already occupied */

  for (int i = 0; i < ship->getLength(); i++) {
    if (orientation == 'C') {
      if (ships[row + i][col] != nullptr || (row + ship->getLength()) > ROWS)
        return false;
    } else {
      if (ships[row][col + i] != nullptr || (col + ship->getLength()) > COLS)
        return false;
    }
  }

  // If we made it here, then there is space available for a ship
  // place the ship

  for (int i = 0; i < ship->getLength(); i++) {
    if (orientation == 'C')
      ships[row + i][col] = ship;
    else
      ships[row][col + i] = ship;
  }
  unsunkShips++;
  return true;
}

/*
attack - Takes in a pair of coordinates. If there's a ship at the square, check
if the square has been attacked. If not, then call ship.takeHit and check if the
ship's damage is equal to its length. If so, then the ship is sunk, increment
unsunkShips and return true. If the square's already been attacked, return true
regardless. If the square does not have a ship on it, record the attack and
return false.
*/
bool BBoard::attack(int row, int col) {
  Ship *ship = ships[row][col];
  // check is there's a ship at the square
  if (ship != nullptr) {
    // check if square was already attacked
    if (!attacked[row][col]) {
      ship->takeHit(); // increment ship damage
      // if ship's damage is equal to its length, then it is sunk
      if (ship->getDamage() == ship->getLength()) {
        std::cout << "They sank " << ship->getName() << "!" << std::endl;
        unsunkShips--;
      }
    }
    // record the attack
    attacked[row][col] = true;
    return true;
  }
  attacked[row][col] = true;
  return false;
}

/*
allShipsSunk - returns true is unsunkShips = 0.
*/
bool BBoard::allShipsSunk() { return !unsunkShips; }

/*
print - prints out the ships board
*/
void BBoard::print(int row, int col) {
  std::cout << " 0 1 2 3 4 5 6 7 8 9" << std::endl;
  char ch = ' ';
  for (int i = 0; i < ROWS; i++) {
    std::cout << i;
    for (int j = 0; j < COLS; j++) {
      ch = ' ';
      if (ships[i][j] != nullptr)
        ch = 'x';
      std::cout << ch << " ";
    }
    std::cout << std::endl;
  }
}

/*
printBool - prints out the attacked board
*/
void BBoard::printBool() {
  std::cout << " 0 1 2 3 4 5 6 7 8 9" << std::endl;
  char ch = ' ';
  for (int i = 0; i < ROWS; i++) {
    std::cout << i;
    for (int j = 0; j < COLS; j++) {
      ch = ' ';
      if (attacked[i][j])
        ch = 'x';
      std::cout << ch << " ";
    }
    std::cout << std::endl;
  }
}

// int main() {
//   BBoard board;
//   Ship ship("hehe", 3);
//   Ship ship2("popo", 5);
//   Ship ship3("yeet", 4);
//   board.placeShip(&ship, 2, 2, 'C');
//   board.placeShip(&ship2, 1, 2, 'R');
//   board.placeShip(&ship3, 6, 8, 'C');
//   board.attack(2, 2);
//   board.attack(3, 2);
//   std::cout << board.attack(4, 2) << std::endl;
//   std::cout << board.attack(4, 2) << std::endl;
//   std::cout << board.attack(6, 2) << std::endl;
//   board.attack(1, 2);
//   board.attack(1, 3);
//   board.attack(1, 4);
//   board.attack(1, 5);
//   board.attack(1, 6);
//   board.print(2, 2);
//   board.printBool();
//   std::cout << ship.getName() << std::endl;
//   std::cout << "ships: " << board.getNumShipsRemaining() << std::endl;
//   std::cout << "all sunk: " << board.allShipsSunk() << std::endl;
//   return 0;
// }
