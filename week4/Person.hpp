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
  string getName();
  double getAge();
};

#endif
