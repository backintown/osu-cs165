/*************************************
 ** Date: 5/23/2018
 ** Author: Alex Cheng
 ** Description:
    This is a class header/implementation file for the the template class
ValSet. The class contains a pointer member variable which points to the array
containing the set and two ints, arraySize and numValues that keep track of the
size of the dynamic array and the number of values in the array.

    The default constructor creates a dynamic array of size 10 and 0 values. The
copy constructor creates a ValSet from the input. The destructor deallocates the
pointer and points it to null.

    There are 4 overloaded operators, =,+,*,/. operator= sets the left set to
equal to the right set. operator+ returns a new set that contains the union of
the two sets. operator* returns a new set that contains only values that are in
both sets. operator/ returns a new set that contains values in one set but not
the other.

    There are 6 member functions. The 'size' function returns the number of
values in the set. The 'isEmpty' function returns false if there are no values
in the set, true otherwise. The 'contains' function takes in a value and returns
true if the value is in the set, false otherwise.

    The 'add' function adds a value to the set and allocates space as necessary
by creating a new pointer and copying the contents back in. The 'remove'
function removes a value from the set if it's available and decrements
numValues.

    The 'getAsVector' function returns the set as a vector.
*********************************/

#include <algorithm>
#include <iostream>
#include <vector>
using std::begin;
using std::binary_search;
using std::end;
using std::find;
using std::for_each;
using std::sort;
using std::vector;

#ifndef VALSET_HPP
#define VALSET_HPP

template <class T> class ValSet {
  T *ptr;
  int arraySize;
  int numValues;

public:
  ValSet();
  ValSet(const ValSet<T> &);
  ValSet<T> &operator=(const ValSet<T> &);
  ~ValSet();
  int size();
  bool isEmpty();
  bool contains(T);
  void add(T);
  void remove(T);
  vector<T> getAsVector();
  ValSet<T> operator+(const ValSet<T> &);
  ValSet<T> operator*(const ValSet<T> &);
  ValSet<T> operator/(const ValSet<T> &);
  // test function
  void display();
  void displayVector(vector<T> vector);
};

#endif

/*
Default Constructor
*/
template <class T> ValSet<T>::ValSet() {
  ptr = new T[10];
  arraySize = 10;
  numValues = 0;
}

/*
Copy Constructor
*/
template <class T> ValSet<T>::ValSet(const ValSet<T> &set) {
  ptr = new T[set.arraySize];
  for (int i = 0; i < set.numValues; i++) {
    *(ptr + i) = *(set.ptr + i);
  }
  arraySize = set.arraySize;
  numValues = set.numValues;
}

/*
operator=
*/
template <class T> ValSet<T> &ValSet<T>::operator=(const ValSet<T> &set) {
  if (this != &set) {
    delete[] ptr;
  }
  ptr = new T[set.arraySize];
  for (int i = 0; i < set.numValues; i++) {
    *(ptr + i) = *(set.ptr + i);
  }
  arraySize = set.arraySize;
  numValues = set.numValues;
  return *this;
}

/*
operator+
*/
template <class T> ValSet<T> ValSet<T>::operator+(const ValSet<T> &set) {
  ValSet<T> newSet = *this; // initialize new array to left obj
  // add right obj's values to new set
  for (int i = 0; i < set.numValues; i++) {
    T item = set.ptr[i];
    newSet.add(item);
  }
  return newSet;
}

/*
operator/
*/
template <class T> ValSet<T> ValSet<T>::operator/(const ValSet<T> &set) {
  ValSet<T> newSet;
  ValSet<T> searchSet;
  // initialize newSet to the larger of the sets
  // set searchSet to the other set
  if (numValues < set.numValues) {
    newSet = set;
    searchSet = *this;
  } else {
    newSet = *this;
    searchSet = set;
  }
  // get newSet as a vector for binary search
  // loop through the searchSet values and remove/add as needed
  vector<T> vect = newSet.getAsVector();
  sort(vect.begin(), vect.end());
  for (int i = 0; i < searchSet.numValues; i++) {
    if (binary_search(vect.begin(), vect.end(), searchSet.ptr[i]))
      // if newSet contains value in searchSet, remove
      newSet.remove(searchSet.ptr[i]);
    else
      // add if newSet does not have it
      newSet.add(searchSet.ptr[i]);
  }
  return newSet;
}

/*
operator*
*/
template <class T> ValSet<T> ValSet<T>::operator*(const ValSet<T> &set) {
  ValSet<T> newSet;
  ValSet<T> searchSet;
  // initialize newSet to the smaller of the sets
  // set searchSet to the other set
  if (numValues > set.numValues) {
    newSet = set;
    searchSet = *this;
  } else {
    newSet = *this;
    searchSet = set;
  }

  /* get searchSet as a vector for binary search
   loop through newSet (the smaller set) and check if each element is in
   searchSet if the element is not there, remove it from newSet since newSet
   is the smaller of the sets, we don't need to add any elements */
  vector<T> vect = searchSet.getAsVector();
  sort(vect.begin(), vect.end());

  // store numvalues since numvalues will change as we remove items
  int originalSize = newSet.numValues;

  // get newSet as vector for looping through since newSet will be changing
  vector<T> newSetVect = newSet.getAsVector();

  for (int i = 0; i < originalSize; i++) {
    if (!binary_search(vect.begin(), vect.end(), newSetVect[i]))
      // if searchSet does not contain value in newSet, remove
      newSet.remove(newSetVect[i]);
  }
  return newSet;
}

/*
size()
*/
template <class T> int ValSet<T>::size() { return numValues; }

/*
isEmpty()
*/
template <class T> bool ValSet<T>::isEmpty() { return !numValues; }

/*
contains(T)
*/
template <class T> bool ValSet<T>::contains(T item) {
  vector<T> vect = this->getAsVector();
  sort(vect.begin(), vect.end());
  return binary_search(vect.begin(), vect.end(), item);
}

/*
add(T)
*/
template <class T> void ValSet<T>::add(T item) {
  vector<T> vect = this->getAsVector();
  sort(vect.begin(), vect.end());
  // displayVector(vect);
  // check if item exists
  if (!binary_search(vect.begin(), vect.end(), item)) {
    // check if size is too big
    if (arraySize < numValues + 1) {
      arraySize *= 2;             // update arraySize
      T *temp = new T[arraySize]; // allocate new array
      // populate new array
      for (int i = 0; i <= numValues; i++) {
        if (i == numValues)
          temp[i] = item;
        else
          temp[i] = ptr[i];
      }
      delete[] ptr; // deallocate memory
      ptr = temp;   // assign ptr to new array
      temp = nullptr;
    } else
      ptr[numValues] = item;
    numValues++; // increment numValues
  }
}

/*
remove(T)
*/
template <class T> void ValSet<T>::remove(T item) {
  // create a vector to remove the item and repopulate the array
  vector<T> vect = this->getAsVector();
  auto iter = find(vect.begin(), vect.end(), item);
  if (*iter) {
    vect.erase(iter);
    numValues--;
    for (int i = 0; i < numValues; i++) {
      ptr[i] = vect[i];
    }
  }
}

/*
getAsVector
*/
template <class T> vector<T> ValSet<T>::getAsVector() {
  vector<T> vect;
  for (int i = 0; i < numValues; i++) {
    vect.push_back(ptr[i]);
  }
  return vect;
}

/*
Destructor
*/
template <class T> ValSet<T>::~ValSet() {
  delete[] ptr;
  ptr = nullptr;
}

/*
debugging functions
*/
template <class T> void ValSet<T>::display() {
  for (int i = 0; i < numValues; i++) {
    std::cout << ptr[i] << " ";
  }
  std::cout << std::endl;
}

template <class T> void ValSet<T>::displayVector(vector<T> vector) {
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << " ";
  }
  std::cout << std::endl;
}