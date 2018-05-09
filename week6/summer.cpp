/***********************************
 ** Date: 5/9/2018
 ** Author: Alex Cheng
 ** Description: This program takes in a list
                 of doubles and returns their sum.
***********************************/

// #include <iostream>

/***********************************
 *          summer:
 * This function takes in an array of doubles and
 * its size and recursively adds the doubles and
 * returns the sum.
 ***********************************/

double summer(double arr[], int size) {
  // base case
  if (size == 0)
    return 0;
  // recursive base
  return arr[size - 1] + summer(arr, size - 1);
}

// int main() {
//   double array[] = {1, 1.0431, 1.0, 1, 1.5};
//   double arr[] = {};
//   std::cout << summer(array, 5) << std::endl;
//   std::cout << summer(arr, 0) << std::endl;
// }