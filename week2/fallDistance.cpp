#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double fallDistance(double seconds);

double fallDistance(double seconds) {
  double g = 9.8, m;
  m = g / 2 * pow(seconds, 2.0);
  cout << m << endl;
  return m;
}

int main() {
  double seconds;
  cin >> seconds;
  double m = fallDistance(seconds);
  cout << m << endl;
}
