/*************************************
 ** Date: 4/4/2018
 ** Author: Alex Cheng
 ** Description:
 ** This function takes in three parameters and sorts them in ascending order.
 ** The function places the lowest value in first and so on.
 **************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void smallSort(int &first, int &second, int &third);

void smallSort(int &first, int &second, int &third) {
  int tmp;

  if (first > second) {
    tmp = first;
    first = second;
    second = tmp;
    cout << first << ", " << second << ", " << third << endl;
  }

  if (first > third) {
    tmp = first;
    first = third;
    third = tmp;
    cout << first << ", " << second << ", " << third << endl;
  }

  if (second > third) {
    tmp = second;
    second = third;
    third = tmp;
    cout << first << ", " << second << ", " << third << endl;
  }
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  smallSort(a, b, c);
  cout << a << ", " << b << ", " << c << endl;
  return 0;
}
