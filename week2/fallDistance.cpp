/**********************************
 ** Date: 4/10/18
 ** Author: Alex Cheng
 ** Description:
 ** This function takes in a seconds parameter
 ** and outputs the distance fallen in meters.
 **********************************/
#include <cmath>
/*
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
*/

double fallDistance(double seconds);

double fallDistance(double seconds) {
  double g = 9.8, m;
  m = g / 2 * pow(seconds, 2.0);
  return m;
}

/* int main() {
  double seconds;
  cin >> seconds;
  double m = fallDistance(seconds);
  cout << m << endl;
} */
