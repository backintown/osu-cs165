/*************************************
 ** Date: 5/2/2018
 ** Author: Alex Cheng
 ** Description: This program contains a function that
                 takes in an array of strings and its size
                 and sorts the array into alphabetical order.
**************************************/

// #include <iostream>
#include <string>
using std::string;

/************************************
 *          stringCompare:
 This function takes in two strings and returns true
 if the first string comes before the second string and
 false otherwise.
************************************/

bool stringCompare(string str1, string str2) {
  string str1Upper = str1;
  string str2Upper = str2;
  // construct uppercase strings
  for (int i = 0; i < str1.length(); i++) {
    str1Upper[i] = std::toupper(str1Upper[i]);
  }
  for (int i = 0; i < str2.length(); i++) {
    str2Upper[i] = std::toupper(str2Upper[i]);
  }

  return str1Upper < str2Upper;
}

/************************************
 *          stringSort:
 This function takes in an array of strings and
 an integer of its size and sorts it in alphabetical
 order using the stringCompare function and the
 selection sort algorithm.
************************************/

void stringSort(string str[], int size) {
  int startScan, minIndex;
  string minString;
  for (startScan = 0; startScan < (size - 1); startScan++) {
    minString = str[startScan];
    minIndex = startScan;
    for (int i = startScan + 1; i < (size); i++) {
      // if str[i] < minString
      if (stringCompare(str[i], minString)) {
        minString = str[i];
        minIndex = i;
      }
    }
    str[minIndex] = str[startScan];
    str[startScan] = minString;
  }
}

// int main() {
//   string str[] = {"a",  "aac", "adbc", "daa", "aab", "a",   "aa",
//                   "ab", "ACB", "BAA",  "DAA", "ac",  "cbc", "AAA"};
//   // string str[] = {"Zepplin", "zebra"};
//   stringSort(str, 14);
//   for (int i = 0; i < 14; i++) {
//     std::cout << str[i] << std::endl;
//   }
// }
