#include "Person.hpp"
#include <string>
#include<iostream>
using std::string;

Person::Person() {
  name = "";
  age = 0;
}

Person::Person(string nameIn, double ageIn) {
  name = nameIn;
  age = ageIn;
}

string Person::getName() { return name; }

double Person::getAge() { return age; }
