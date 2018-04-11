/*********************************
 ** Date: 4/10/18
 ** Author: Alex Cheng
 ** Description:
 ** This function takes in an integer and outputs the
 ** number of steps it takes to reach 1 in the hailstone sequence.
 ** If the integer is even, the function divides it by two.
 ** if the integer is odd, the function multiplies it by three and adds 1.
 **********************************/

/*
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int hailstone(int num);
*/

int hailstone(int num) {
  int steps = 0;
  while (num != 1) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      num = num * 3 + 1;
    }
    steps++;
  };
  return steps;
}

/* int main() {
  int input;
  cin >> input;
  cout << hailstone(input) << endl;
  return 0;
} */