#include <iostream>

bool isDecreasing(int arr[], int size) {
  std::cout << arr[size - 1] << " " << arr[size - 2] << std::endl;
  if (size == 2)
    return arr[size - 1] < arr[size - 2];

  if (arr[size - 1] < arr[size - 2])
    return isDecreasing(arr, size - 1);
  return false;
}

int main() {
  int array[] = {0, -2, -3, -4, 0};
  std::cout << isDecreasing(array, 5) << std::endl;
}
