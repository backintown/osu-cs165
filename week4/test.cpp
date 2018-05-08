#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n = 8, r = 9, i = 0;
  while (r > n) {
    i++;
    r -= i;
    cout << "n: " << n << "r: " << r << "i: " << i << endl;
  }
  if (n == r) {
    cout << "hello" << endl;
  } else {
    cout << "poop" << endl;
  }
  string str = "poop";
  if (str.at(0) == 'p')
    cout << "poio";
}
