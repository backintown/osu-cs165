#include "Box.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Box box1;
  Box box2(1, 2, 3);
  cout << "Box 1 volume: " << box1.calcVolume() << endl;
  cout << "Box 1 SA: " << box1.calcSurfaceArea() << endl;
  cout << "Box 2 volume: " << box2.calcVolume() << endl;
  cout << "Box 2 SA: " << box2.calcSurfaceArea() << endl;
  box1.setHeight(5);
  box2.setWidth(4);
  Box b(2.4, 7.1, 5.0);
  double v = b.calcVolume();
  double sa = b.calcSurfaceArea();
  cout << "v: "<<v<<endl;
  cout << "sa: "<<sa<<endl;

  return 0;
}
