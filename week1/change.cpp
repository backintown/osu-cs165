/**********************************************
 * Date: 3/29/18
 * Author: Alex Cheng
 * Description: A program that asks the user for an interger number of cents
 * from 0-99, and outputs how many of each type of coin would represent that
 * amount with the fewest total number of coins.
 * ************************************************/

#include <iostream>
using namespace std;

int main() {
  int change, Q, D, N, P;
  cout << "Please enter an amount in cents less than a dollar" << endl;
  cin >> change;
  Q = change / 25;
  change %= 25;
  D = change / 10;
  change %= 10;
  N = change / 5;
  change %= 5;
  P = change;
  cout << "Your change will be: " << endl;
  cout << "Q: " << Q << endl;
  cout << "D: " << D << endl;
  cout << "N: " << N << endl;
  cout << "P: " << P << endl;

  return 0;
}
