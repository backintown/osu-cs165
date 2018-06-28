/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This is the implementation file for the MyInteger class. The default
    constructor sets pInt to 0. The regular constructor sets pInt to the input.
    The copy constructor takes in a MyInteger instance and creates a new
    MyInteger instance and sets pInt to the input's pInt. The =operator first
    frees memory from the left obj's pInt and then allocates new memory for the
    new pInt equal to the right obj's pInt.
***********************************/

#include "MyInteger.hpp"
// #include <iostream>

/***************************
 * default constructor
 ***************************/
MyInteger::MyInteger() { pInteger = new int(0); }

/***************************
 * constructor
 ***************************/
MyInteger::MyInteger(int value) { pInteger = new int(value); }

/***************************
 * copy constructor
 ***************************/
MyInteger::MyInteger(const MyInteger &obj) {
  pInteger = new int(*obj.pInteger);
}

/***************************
 * overloaded copy assignment operator
 ***************************/
MyInteger &MyInteger::operator=(const MyInteger &obj) {
  // check if obj on the left is equal to obj on the right
  if (this != &obj)
    delete pInteger;                 // delete original pointer
  pInteger = new int(*obj.pInteger); // allocate new pInt pointer
  return *this;                      // return new obj pointer
}

/***************************
 * getter and setter methods for pInteger
 ***************************/
int MyInteger::getMyInt() { return *pInteger; }
void MyInteger::setMyInt(int value) { *pInteger = value; }

// int main() {
//   MyInteger obj1(17);
//   MyInteger obj2 = obj1;
//   std::cout << obj1.getMyInt() << std::endl;
//   std::cout << obj2.getMyInt() << std::endl;

//   obj2.setMyInt(9);
//   std::cout << obj1.getMyInt() << std::endl;
//   std::cout << obj2.getMyInt() << std::endl;

//   MyInteger obj3(42);
//   obj2 = obj3;
//   std::cout << obj2.getMyInt() << std::endl;
//   std::cout << obj3.getMyInt() << std::endl;

//   obj3.setMyInt(1);
//   std::cout << obj2.getMyInt() << std::endl;
//   std::cout << obj3.getMyInt() << std::endl;
//   return 0;
// }
