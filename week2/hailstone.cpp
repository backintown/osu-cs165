#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int hailstone(int num);

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

int main() {
  int input;
  cin >> input;
  cout << hailstone(input) << endl;
  return 0;
}