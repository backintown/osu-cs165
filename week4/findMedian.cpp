/******************************
 ** Date: 4/23/2018
 ** Author: Alex Cheng
 ** Description: This function takes in an array of integers
                 and the size of the array and returns a double
                 that's the median of the array.
*******************************/

#include <algorithm>
//#include <iostream>

double findMedian(int array[], int size) {
  std::sort(array, array + size);
  double median;
  if (size % 2 == 0) {
    median = ((array[size / 2] + array[size / 2 - 1]) / 2.0);
  } else {
    median = array[size / 2];
  }
  return median;
}

// int main() {
//   int array[] = {23, 5, -10, 0, 0, 321, 1, 2, 99, 30, 1, 2, 3, 4};
//   int size = 14;
//   double median = findMedian(array, size);
//   for (int i = 0; i < size; i++)
//     std::cout << array[i] << ' ';

//   std::cout << std::endl;
//   std::cout << median << std::endl;
//   return 0;
// }