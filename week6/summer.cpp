#include <iostream>

double summer(double arr[], int size) {
  if (size == 0)
    return 0;
  return arr[size - 1] + summer(arr, size - 1);
}

int main() {
  double array[] = {1, 1.0431, 1.0, 1, 1.5};
  double arr[] = {};
  std::cout << summer(array, 5) << std::endl;
  std::cout << summer(arr, 0) << std::endl;
}