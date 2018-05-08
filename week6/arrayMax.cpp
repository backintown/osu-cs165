#include <iostream>

int arrayMax(int arr[], int size) {
  if (size == 0)
    return 0;
  int max = arr[size - 1];
  if (max > arrayMax(arr, size - 1))
    return max;
  return arrayMax(arr, size - 1);
}

int main() {
  int array[] = {8, 6, 0, 8, 6};
  std::cout << arrayMax(array, 5) << std::endl;
}
