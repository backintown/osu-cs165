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
  if (size == 2)
    if (arr[size - 1] > arr[size - 2])
      return arr[size - 1];
    else
      return arr[size - 2];
  // recursive case
  if (arr[size - 1] > arrayMax(arr, size - 1))
    return arr[size - 1];
  return arrayMax(arr, size - 1);
}

// int main() {
//   int array[] = {5, -1, -2, -3, -5};
//   std::cout << arrayMax(array, 5) << std::endl;
// }
