/***************************************
 ** Author: Alex Cheng
 ** Date: 4/5/2018
 ** Description:
 ** This program will prompt the user for
 ** an integer for some other player to guess.
 ** It will tell the player if the guess is too high or too low.
 ** It will display the number of guesses when the player wins.
 **************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  bool done = false;
  cout << "Enter a number for the player to guess." << endl;
  int num, guess, tries = 0;
  cin >> num;
  cout << "Enter your guess." << endl;
  while (!done) {
    cin >> guess;
    if (guess > num) {
      cout << "Too high - try again." << endl;
    } else if (guess < num) {
      cout << "Too low - try again." << endl;
    } else {
      done = true;
    }
    tries++;
  }
  cout << "You guessed it in " << tries << " tries." << endl;

  return 0;
}