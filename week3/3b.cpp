#include "Taxicab.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  Taxicab cab1;
  Taxicab cab2(5, -8);
  Taxicab cab3(0, 31030);
  cout << "cab1 distance: " << cab1.getDistanceTraveled() << endl;
  cout << "cab2 distance: " << cab2.getDistanceTraveled() << endl;
  cab1.moveX(3);
  cab1.moveY(-4);
  cab1.moveX(-1);
  cab3.moveY(122330);
  cab3.moveX(2147483650);
  cout << cab1.getDistanceTraveled() << endl;
  cab2.moveY(7);
  cout << "cab1 distance: " << cab1.getDistanceTraveled() << endl;
  cout << "cab2 distance: " << cab2.getDistanceTraveled() << endl;
  cout << "cab3 distance: " << cab3.getDistanceTraveled() << endl;
  cout << "cab3 x: " << cab3.getXCoord() << endl;
  cout << "cab3 y: " << cab3.getYCoord() << endl;
  cout << "cab2 y: " << cab2.getYCoord() << endl;
}
