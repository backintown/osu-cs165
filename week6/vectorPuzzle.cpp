/***********************************
 ** Date: 5/9/2018
 ** Author: Alex Cheng
 ** Description: This program determines if a puzzle
                 is solvable. It uses a helper function
                 called solvePuzzle to add additional
                 parameters to help with recursive step.
***********************************/

// #include <iostream>
#include <vector>
using std::vector;

/***********************************
 * solvePuzzle function prototype
 ***********************************/
bool solvePuzzle(vector<int> &, int, vector<bool> &);
/***********************************
 * vectorPuzzle function prototype
 ***********************************/
bool vectorPuzzle(vector<int> &);

/***********************************
 *          vectorPuzzle:
 * This function takes in a vector of integers
 * and returns true if the puzzle is solvable,
 * false otherwise. It creates a vector of booleans
 * called 'stepped' to determine if a value has
 * already been accessed and passes the puzzle and
 * stepped vectors as well as a starting position
 * to the helper function- solvePuzzle.
 ***********************************/

bool vectorPuzzle(vector<int> &puzzle) {
  vector<bool> stepped;
  for (int i = 0; i < puzzle.size(); i++) {
    stepped.push_back(false);
  }
  return solvePuzzle(puzzle, 0, stepped);
}

/***********************************
 *          solvePuzzle:
 * This function takes in the puzzle and the stepped
 * vector and a starting position and recursively calls
 * itself until it solves the puzzle or determines
 * there's no solution and returns true of false respectively.
 ***********************************/

bool solvePuzzle(vector<int> &row, int position, vector<bool> &stepped) {
  // base case
  if (row.at(position) == 0)
    return true;
  // get value at current position
  int current = row.at(position);
  // move left
  // make sure we don't go out of bounds
  // do not try to step back if we already tried it
  int left = position - current;
  if (left > 0 && !stepped.at(left)) {
    stepped.at(left) = true;
    if (solvePuzzle(row, left, stepped))
      return true;
  }
  // move right
  int right = position + current;
  if (right < row.size() && !stepped.at(right)) {
    stepped.at(right) = true;
    if (solvePuzzle(row, right, stepped))
      return true;
  }
  return false;
}

// int main() {
//   vector<int> puzzle = {2, 4, 5, 3, 0, 1, 3, 1, 4, 0};
//   vector<int> puzzle2 = {1, 3, 2, 1, 3, 4, 0};
//   std::cout << vectorPuzzle(puzzle) << std::endl;
//   std::cout << vectorPuzzle(puzzle2) << std::endl;
// }
