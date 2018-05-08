/********************************
 ** Date: 4/25/2018
 ** Author: Alex Cheng
 ** Description:
    This program sorts three integer arguments from smallest to largest.
    It uses a swap function to switch two numbers' positions.
********************************/

// #include <iostream>
// using std::cout;
// using std::endl;

/************************
          swap:
 This function takes in two pointers and
 switches the value they point to to the other value.
************************/

void swap(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

/************************
 *        smallSort:
 This function takes in three pointers and compares
 the deferenced values for each. It then calls the swap function
 to change their positions and sort them.
*************************/

void smallSort2(int *first, int *second, int *third) {
  if (*first > *second) {
    swap(first, second);
  }
  if (*first > *third) {
    swap(first, third);
  }
  if (*second > *third) {
    swap(second, third);
  }
}

// int main() {
//   int a = 3, b = 4, c = 5;
//   // std::cin >> a >> b >> c;
//   smallSort2(&a, &b, &c);
//   cout << a << b << c << endl;
//   if (a == 3 && b == 4 && c == 5)
//     cout << "true\n";
//   return 0;
// }
