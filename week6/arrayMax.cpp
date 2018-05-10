/***********************************
 ** Date: 5/9/2018
 ** Author: Alex Cheng
 ** Description: This program returns the max integer
                 from a list of integers.
***********************************/

// #include <iostream>

/***********************************
 *          arrayMax:
 * This function takes in an array of integers and
 * its size and checks the array recursively to find
 * the maximum integer.
 ***********************************/

int arrayMax(int arr[], int size) {
  // base case
  if (size == 1)
    return arr[size - 1];
  // recursive case
  // go all the way to base case and come back
  int max = arrayMax(arr, size - 1);
  if (arr[size - 1] > max)
    return arr[size - 1];
  return max;
}

// int main() {
//   int array[] = {-5, -1, -2, -3, -5};
//   int arr[] = {20, 10, 30, 50};
//   int arr2[] = {13, 14, 15};

//   int arr3[] = {9, 7, 2, 2, 4, 2, 10, 6, 2, 2, 2, 2, 2, 2, 8, 2};
//   std::cout << arrayMax(array, 5) << std::endl;
//   std::cout << arrayMax(arr, 4) << std::endl;
//   std::cout << arrayMax(arr2, 3) << std::endl;

//   std::cout << arrayMax(arr3, 16) << std::endl;
// }
