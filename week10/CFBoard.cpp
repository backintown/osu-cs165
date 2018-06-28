/*********************************
 ** Date: 6/6/2018
 ** Author: Alex Cheng
 ** Description:
    This is the class implementation file for the CFBoard class. The constructor
initializes the board. makeMove allows a player to drop a game piece in a
column. updateGameState checks if the game has ended and sets the game state.
getGameState returns the game state. isFull determines if the board is full or
not.
*********************************/

#include "CFBoard.hpp"
#include <iostream>

/*
board columns goes from left(0) to right(6)
rows go from down(0) to up(5)
*/

/*
constructor - initializes board with '.' and set gameState to UNFINISHED
*/
CFBoard::CFBoard() {
  // initialize board
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      board[i][j] = '.';
    }
  }
  gameState = UNFINISHED;
}

/*
makeMove - Takes in a int for column (1-7) and char for the player and attempts
to place a piece in the specified column by checking first if the game is
UNFINISHED and if the column's not already full, if not, then loop through the
column and place the piece where available and call updateGameState and return
true.
*/
bool CFBoard::makeMove(int col, char player) {
  // decrement col so it matches array index
  col--;
  if (col >= COLS || col < 0)
    return false;
  // check if column is full or game is ongoing
  if (gameState != UNFINISHED || board[ROWS - 1][col] != '.')
    return false;
  else {
    for (int i = 0; i < ROWS; i++) {
      // check is space is available
      if (board[i][col] == '.') {
        board[i][col] = player;
        this->updateGameState(i, col);
        return true;
      }
    }
  }
}

/*
updateGameState -

Takes in a row and column and checks to see if the player that
just played won.

It checks four directions using for loops for each: horizontal,
vertical, diagonal up, diagonal down. For each direction, first initialize count
to 1 then check the adjacent pieces to see if it matches the player's if so,
increment count and check the next adjacent pieces. If count reaches 4 in any
direction, then the player has won, set gameState to O/X_WON.

If the gameState
is still UNFINISHED at the end of the for loops, check if the board is full, if
so, the game is a draw, set gameState to DRAW.
*/
void CFBoard::updateGameState(int row, int col) {
  int cnt = 1;
  // set player to who just played
  char player = board[row][col];
  // check horizontally
  for (int i = 1; i < 4; i++) {
    // check both directions
    if (row + i < ROWS && board[row + i][col] == player)
      cnt++;
    if (row - i >= 0 && board[row - i][col] == player)
      cnt++;
    if (cnt == 4) {
      if (player == 'o')
        gameState = O_WON;
      else if (player == 'x')
        gameState = X_WON;
    }
  }
  // check vertically
  cnt = 1; // reset count
  for (int i = 1; i < 4; i++) {
    // check both directions
    if (col + i < COLS && board[row][col + i] == player)
      cnt++;
    if (col - i >= 0 && board[row][col - i] == player)
      cnt++;
    if (cnt == 4) {
      if (player == 'o')
        gameState = O_WON;
      else if (player == 'x')
        gameState = X_WON;
    }
  }
  // check diagonally bottomleft -> topright '/'
  cnt = 1; // reset count
  for (int i = 1; i < 4; i++) {
    // check both directions
    if (col + i < COLS && row + i < ROWS && board[row + i][col + i] == player)
      cnt++;
    if (col - i >= 0 && row - i >= 0 && board[row - i][col - i] == player)
      cnt++;
    if (cnt == 4) {
      if (player == 'o')
        gameState = O_WON;
      else if (player == 'x')
        gameState = X_WON;
    }
  }
  // check diagonally topleft -> bottomright '\'
  cnt = 1; // reset count
  for (int i = 1; i < 4; i++) {
    // check both directions
    if (col + i < COLS && row - i >= 0 && board[row - i][col + i] == player)
      cnt++;
    if (col - i >= 0 && row + i < ROWS && board[row + i][col - i] == player)
      cnt++;
    if (cnt == 4) {
      if (player == 'o')
        gameState = O_WON;
      else if (player == 'x')
        gameState = X_WON;
    }
  }
  // if nobody won, check if board is full, if it's full then it's a draw
  if (gameState == UNFINISHED && this->isFull())
    gameState = DRAW;
}

/*
isFull - Loops through the board to check if there's any available spaces.
Returns false if there are.
*/
bool CFBoard::isFull() {
  for (int i = ROWS - 1; i >= 0; i--) {
    for (int j = 0; j < COLS; j++) {
      if (board[i][j] == '.') {
        return false;
      }
    }
  }
  return true;
}

/*
print - displays the board in its current state
*/
void CFBoard::print() {
  std::cout << "1 2 3 4 5 6 7" << std::endl;
  for (int i = ROWS - 1; i >= 0; i--) {
    for (int j = 0; j < COLS; j++) {
      std::cout << board[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

// int main() {
//   CFBoard board;
//   board.makeMove(7, 'x');
//   board.makeMove(2, 'o');
//   board.makeMove(3, 'x');
//   board.makeMove(3, 'x');
//   board.makeMove(4, 'x');
//   board.makeMove(4, 'x');
//   board.makeMove(4, 'o');
//   board.makeMove(5, 'o');
//   board.makeMove(5, 'x');
//   board.makeMove(5, 'o');
//   board.makeMove(3, 'x');
//   board.makeMove(2, 'x');
//   board.makeMove(2, 'o');
//   board.makeMove(2, 'x');
//   board.makeMove(4, 'x');
//   board.makeMove(5, 'x');
//   board.makeMove(5, 'x');

//   board.print();
//   std::cout << board.getGameState() << std::endl;
//   std::cout << board.isFull() << std::endl;
//   return 0;
// }
