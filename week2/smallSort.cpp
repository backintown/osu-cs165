#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void smallSort(int &first, int &second, int &third);

void smallSort(int &first, int &second, int &third) {
  int tmp;
  // first is the greatest
  if (first > second && first > third) {
    // flip first and third
    tmp = first;
    first = third;
    third = tmp;
    // then check if second is greater than third
    if (second > third) {
      tmp = second;
      second = third;
      third = tmp;
    }
  }
  // first is greater than second but not greater than third
  if (first > second) {
    tmp = first;
    first = second;
    second = tmp;
  }
  // first is greater than third but not greater than second
  if (first > third) {
    tmp = first;
    first = third;
    third = tmp;
  }
  // first is less than second and third, second is greater than third
  if (second > third) {
    tmp = second;
    second = third;
    third = tmp;
  }
}

int main() {
  int a = 3, b = 2, c = 1;
  smallSort(a, b, c);
  cout << a << ", " << b << ", " << c << endl;
  return 0;
}