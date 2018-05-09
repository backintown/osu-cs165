/***********************************
 ** Date: 5/9/2018
 ** Author: Alex Cheng
 ** Description: This program determines if a list
                 of integers is strictly decreasing.
***********************************/
// #include <iostream>

/***********************************
 *           isDecreasing:
 * This function takes in an array of integers
 * and its size and returns true if the array
 * is strictly decreasing, false otherwise
 ***********************************/

bool isDecreasing(int arr[], int size) {
  // base case
  if (size == 2)
    return arr[size - 1] < arr[size - 2];
  // recursive base
  if (arr[size - 1] < arr[size - 2])
    return isDecreasing(arr, size - 1);
  return false;
}

// int main() {
//   int array[] = {0, -2, -3, -4, 0};
//   std::cout << isDecreasing(array, 5) << std::endl;
// }
