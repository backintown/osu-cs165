/******************************
 ** Date: 6/6/2018
 ** Author: Alex Cheng
 ** Description:
    This is the header file for the class CFBoard. It has a 6x7 2-D array member
variable for the board. The rows and columns are specified as constants. It has
a GameState member variable which is an enumerated data type. It has a
constructor, a makeMove function that allows player to drop a game piece, an
updateGameState function that is called after each call to makeMove, a
getGameState function that returns the current gameState, an isFull function
that returns true if the board is full. The print function displays the board.
*******************************/
#ifndef CFBOARD_HPP
#define CFBOARD_HPP

enum GameStates { X_WON, O_WON, DRAW, UNFINISHED };
const int ROWS = 6;
const int COLS = 7;

class CFBoard {
private:
  char board[ROWS][COLS];
  GameStates gameState;

public:
  CFBoard();
  bool makeMove(int, char);
  void updateGameState(int, int);
  GameStates getGameState() { return gameState; };
  void print();
  bool isFull();
};

#endif
