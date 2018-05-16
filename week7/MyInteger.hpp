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
