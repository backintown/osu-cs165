/********************************
 ** Date: 4/25/18
 ** Author: Alex Cheng
 ** Description:
    This file is the function implementation file for the Person class.
    Functions: Person() - default constructor for Person, assigns
                          name to empty string and age to 0.
               Person(string, double) - constructor, assigns name to nameIn
                                        and age to ageIn.
               getName() - returns a Person's name.
               getAge() - returns a Person's age.
*********************************/

#include "Person.hpp"
#include <string>
using std::string;

/************************
 Person() - default constructor for Person, assigns
            name to empty string and age to 0.
************************/

Person::Person() {
  name = "";
  age = 0;
}

/************************
 Person(string, double) - constructor, takes in a string and integer
                          assigns name to nameIn
                          and age to ageIn.
************************/

Person::Person(string nameIn, double ageIn) {
  name = nameIn;
  age = ageIn;
}

/************************
getName() - returns a Person's name.
************************/

string Person::getName() const { return name; }

/************************
getAge() - returns a Person's age.
************************/

double Person::getAge() { return age; }
