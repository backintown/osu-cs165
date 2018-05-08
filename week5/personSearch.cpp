/**********************************
 ** Date: 5/2/2018
 ** Author: Alex Cheng
 ** Description: This file contains a function called
                 personSearch which takes in a list of people
                 and a name and outputs where in the list
                 the person is.
***********************************/

#include "Person.hpp"
// #include <iostream>
#include <string>
#include <vector>
// using std::cout;
// using std::endl;
using std::string;
using std::vector;

/******************************
 *        personSearch:
 This function takes a vector of Person objects
 and and string name and searches through the vector
 for the name using a binary search algorithm.
 It then outputs the index of that Person.
 ******************************/
int personSearch(const vector<Person> people, string name) {
  bool found = false;
  int first = 0;
  int middle = 0;
  int last = people.size() - 1;
  int index = -1;
  while (first <= last && !found) {
    middle = (last + first) / 2;
    if (people[middle].getName() == name) {
      found = true;
      index = middle;
    } else if (people[middle].getName() > name) {
      last = middle - 1;
    } else {
      first = middle + 1;
    }
  }
  return index;
}

// int main() {
//   Person a("aac", 5);
//   Person b("abc", 5);
//   Person c("acc", 5);
//   vector<Person> peeps{a, b, c};
//   cout << personSearch(peeps, "aac") << endl;
//   cout << personSearch(peeps, "abc") << endl;
//   cout << personSearch(peeps, "acc") << endl;
//   cout << personSearch(peeps, "blah") << endl;

//   return 0;
// }