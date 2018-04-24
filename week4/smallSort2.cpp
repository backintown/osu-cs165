#include <iostream>
using std::cout;
using std::endl;

void swap(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void smallSort(int &first, int &second, int &third) {
  int *firstPtr = &first;
  int *secondPtr = &second;
  int *thirdPtr = &third;
  if (first > second) {
    swap(firstPtr, secondPtr);
  }
  if (first > third) {
    swap(firstPtr, thirdPtr);
  }
  if (second > third) {
    swap(secondPtr, thirdPtr);
  }
}

int main() {
  int a = 3, b = 2, c = 3;
  smallSort(a, b, c);
  cout << a << b << c << endl;
  return 0;
}
