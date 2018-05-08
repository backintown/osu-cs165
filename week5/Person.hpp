/***********************************
 ** Date: 4/25/18
 ** Author: Alex Cheng
 ** Description:
    This file is the header file for the Person class.
    It has two member variables, string name and integer age.
    Two constructors, a default and one that takes 2 arguments.
    Getter methods for both member variables.
************************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
using std::string;
class Person {
private:
  string name;
  double age;

public:
  Person();
  Person(string, double);
  string getName() const;
  double getAge();
};

#endif
