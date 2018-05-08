/**********************************
 ** Date: 5/2/2018
 ** Author: Alex Cheng
 ** Description: This file contains a function called
                 boxSort which takes in a list of boxes
                 and its size and sorts them by volume.
***********************************/

#include "Box.hpp"
#include <iostream>

using std::cout;
using std::endl;

/***********************************
 *            boxSort:
 This function takes in an array of Boxes and
 an integer of the size of the array and sorts
 them by volume using the bubble sort algorithm.
************************************/

void boxSort(Box box[], int size) {
  Box temp;
  bool madeAswap = false;
  do {
    madeAswap = false;
    for (int i = 0; i < size - 1; i++) {
      cout << box[i].calcVolume() << "vs" << box[i + 1].calcVolume() << endl;
      if (box[i].calcVolume() < box[i + 1].calcVolume()) {
        temp = box[i];
        box[i] = box[i + 1];
        box[i + 1] = temp;
        madeAswap = true;
      }
      cout << " | " << box[0].calcVolume() << " | " << box[1].calcVolume()
           << " | " << box[2].calcVolume() << " | " << box[3].calcVolume()
           << " | " << box[4].calcVolume() << " | " << endl;
    }
  } while (madeAswap);
}

int main() {
  Box a;
  Box b(5, 6, 7);
  Box c(1, 2, 3);
  Box d;
  Box box[] = {a, b, c, d};
  Box boxArray[] = {Box(2, 3, 2), Box(1, 1, 1.5), Box(7, 2, 1), Box(2, 6, 1),
                    Box(2, 3, 4)};
  boxSort(boxArray, 5);
  // boxSort(box, 4);
  for (auto i : boxArray) {
    cout << i.calcVolume() << endl;
  }
  // for (auto i : box) {
  //   cout << i.calcVolume() << endl;
  // }
  return 0;
}
