#include "Person.hpp"
#include <cmath>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::sqrt;
using std::string;

double stdDev(Person person[], int size) {
  double average = 0.0;
  double sumAge = 0.0;
  double age = 0.0;
  double sigma_squared = 0.0;
  for (int i = 0; i < size; i++) {
    age = person[i].getAge();
    sumAge += age;
  }
  average = sumAge / size;
  for (int j = 0; j < size; j++) {
    sigma_squared +=
        (person[j].getAge() - average) * (person[j].getAge() - average);
  }
  return sqrt(sigma_squared / size);
}

int main() {
  Person bob("bob", -5);
  Person joje("joje", -6);
  Person jj("jj", -7);
  Person eraef("fdsfk", -8);
  Person people[] = {bob, joje, jj, eraef};
  Person people2[] = {Person("a", 1), Person("b", 50), Person("c", -40),
                      Person("d", 3), Person("e", 90)};
  double stddev = stdDev(people, 4);
  cout << stddev << endl;
  cout << stdDev(people2, 5) << endl;
  cout << bob.getName() << endl;
}
