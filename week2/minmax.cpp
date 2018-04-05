/*********************************
 ** Author: Alex Cheng
 ** Date: 4/5/2018
 ** Description:
 ** This program will ask the user for the amount of integers they
 ** wish to enter and then display the minimum and maximum of those
 ** integers.
 **********************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int max, min, numIntegers, input;
  cout << "How many integers would you like to enter?" << endl;
  cin >> numIntegers;
  cout << "Please enter " << numIntegers << " integers." << endl;
  for (int i = 1; i <= numIntegers; i++) {
    cin >> input;
    if (i == 1) {
      max = input;
      min = input;
    } else if (input <= min) {
      min = input;
    } else if (input >= max) {
      max = input;
    }
  }

  cout << "min: " << min << endl;
  cout << "max: " << max << endl;

  return 0;
}