#include "ValSet.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ValSet<char> mySet;
  mySet.add('A');
  mySet.add('j');
  mySet.add('&');
  ValSet<char> mySet2 = mySet;
  mySet2.add('b');
  mySet2.add('5');
  mySet2.add('7');
  mySet2.add('8');
  mySet2.add('9');
  // mySet2.add('n');
  mySet.add('y');
  mySet.add('1');
  mySet.add('2');
  mySet.add('u');
  mySet.add('i');
  mySet.add('z');
  // mySet.add('p');
  cout << "set 1" << endl;
  cout << mySet.size() << endl;
  mySet.display();

  cout << "set 2" << endl;
  cout << mySet2.size() << endl;
  mySet2.display();

  ValSet<char> interSet;
  interSet = mySet + mySet2;

  cout << "union set" << endl;
  cout << interSet.size() << endl;
  interSet.display();

  return 0;
}
