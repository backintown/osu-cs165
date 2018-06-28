/**********************************
 ** Author: Alex Cheng
 ** Date: 5/16/2018
 ** Description:
    This is the header file for the MyInteger class. It has an integer
    pointer member variable called pInteger. It has 3 constructors- default,
    copy, and regular constructor and a destructor. It has getter and setter
    methods for the member variable called get/setMyInt.
    It also has an overloaded =operator.
***********************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger {
private:
  int *pInteger;

public:
  MyInteger &operator=(const MyInteger &obj); // overloaded =operator
  MyInteger();                                // default constructor
  MyInteger(int value);                       // constructor
  MyInteger(const MyInteger &obj);            // copy constructor
  ~MyInteger() { delete pInteger; };          // destructor
  // getter and setter
  int getMyInt();
  void setMyInt(int value);
};

#endif
