#include <iostream>
#include <vector>
using std::vector;

bool solvePuzzle(vector<int> &, int, vector<bool> &);
bool vectorPuzzle(vector<int> &);

bool vectorPuzzle(vector<int> &puzzle) {
  vector<bool> stepped;
  for (int i = 0; i < puzzle.size(); i++) {
    stepped.push_back(false);
  }
  return solvePuzzle(puzzle, 0, stepped);
}

bool solvePuzzle(vector<int> &row, int position, vector<bool> &stepped) {
  // std::cout << row.at(position) << std::endl;
  if (row.at(position) == 0)
    return true;
  int current = row.at(position);
  // move left
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

int main() {
  vector<int> puzzle = {2, 4, 5, 3, 1, 3, 1, 4, 0};
  vector<int> puzzle2 = {1, 3, 2, 1, 3, 4, 0};
  // std::cout << puzzle.at(2) << std::endl;
  std::cout << vectorPuzzle(puzzle) << std::endl;
  std::cout << vectorPuzzle(puzzle2) << std::endl;
}
