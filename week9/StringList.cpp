/************************************
 ** Date: 5/30/2018
 ** Author: Alex Cheng
 ** Description:
    This is the class implementation file for the StringList class. The copy
constructor takes in a StringList and copies over all nodes. The destructor
loops through the list and frees the memory from each node. The add method adds
a node to the end of the list. The positionOf method loops through the list to
find the node with the input value and returns the position if available, -1
otherwise. The setNodeVal method loops through the list to the input position
and replaces the value with the input value and returns true, false if the
position if out of bounds. The getAsVector method pushes all node values into a
vector and returns it.
************************************/

#include "StringList.hpp"
// #include <iostream>
// using namespace std;

/*
copy constructor - creates a new StringList that's a copy of the input
*/
StringList::StringList(const StringList &list) {

  // create new string list from input list's values
  head = nullptr;
  ListNode *listPtr = list.head;
  while (listPtr != nullptr) {
    this->add(listPtr->value);
    // nodePtr->next = new ListNode(listPtr->value, nodePtr);
    listPtr = listPtr->next;
  }
}

/*
destructor - loops through the list to free memory from each node
*/
StringList::~StringList() {
  ListNode *nodePtr = head;
  while (nodePtr != nullptr) {
    ListNode *garbage = nodePtr;
    nodePtr = nodePtr->next;
    delete garbage;
  }
}

/*
add - add a node to the end of the list
*/
void StringList::add(string str) {
  if (!head)
    head = new ListNode(str);
  else {
    ListNode *nodePtr = head;
    while (nodePtr->next != nullptr) {
      nodePtr = nodePtr->next;
    }
    //
    nodePtr->next = new ListNode(str);
  }
}

/*
positionOf - loop through the list to find the input value and returns the
position of the value
*/
int StringList::positionOf(string str) {
  int cnt = 0;
  ListNode *nodePtr = head;
  while (nodePtr != nullptr && nodePtr->value != str) {
    nodePtr = nodePtr->next;
    cnt++;
  }
  if (nodePtr)
    return cnt;
  return -1;
}

/*
setNodeVal - sets a node to the input value and the input position if available.
*/
bool StringList::setNodeVal(int pos, string str) {
  int cnt = 0;
  ListNode *nodePtr = head;
  // loop through nodes until we get to pos
  while (nodePtr != nullptr && cnt != pos) {
    nodePtr = nodePtr->next;
    cnt++;
  }
  // change the node's value is it exists
  if (nodePtr) {
    nodePtr->value = str;
    return true;
  }
  return false;
}

/*
getAsVector - returns the list as a vector
*/
vector<string> StringList::getAsVector() {
  vector<string> vect;
  ListNode *nodePtr = head;
  while (nodePtr != nullptr) {
    vect.push_back(nodePtr->value);
    nodePtr = nodePtr->next;
  }
  return vect;
}

// int main() {
// StringList list;
// list.add("1");
// list.add("2");
// list.add("3");
// list.add("4");
// cout << list.positionOf("2") << endl;
// list.setNodeVal(1, "5");
// cout << list.positionOf("5") << endl;
// cout << list.positionOf("6") << endl;
// vector<string> vect = list.getAsVector();
// cout << vect[0] << vect[1] << vect[2] << vect[3] << endl;
// StringList list2 = list;
// cout << list2.positionOf("1") << endl;
// cout << list2.setNodeVal(2, "7") << endl;
// cout << list2.positionOf("3") << endl;
// cout << list2.positionOf("4") << endl;
// vector<string> vect2 = list2.getAsVector();
// cout << vect2[0] << vect2[1] << vect2[2] << vect2[3] << endl;
// cout << vect[0] << vect[1] << vect[2] << vect[3] << endl;
// }