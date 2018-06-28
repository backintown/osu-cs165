/*******************************
 ** Date: 5/30/2018
 ** Author: Alex Cheng
 ** Description:
    This is the header file for the class StringList. It has one protected
member variable head which is a ListNode that denotes the head of the list. The
ListNode struct is a self-referencing class that has a value, a ListNode that
points to the next node and a constructor that takes a value and a pointer to
the next node. It contains a default that sets head to nullptr, a copy
constructor, and a destructor. It has an add method to all a node to the list.
The positionOf method returns the position of a value. The setNodeVal method
sets a node value to the given value and returns true if a value was changed.
The getAsVector method returns the list as a vector.
**********************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <string>
#include <vector>
using std::string;
using std::vector;
class StringList {
protected:
  struct ListNode {
    string value;
    ListNode *next;
    ListNode(string value1, ListNode *next1 = nullptr) {
      value = value1;
      next = next1;
    }
  };
  ListNode *head;

public:
  StringList() { head = nullptr; };
  StringList(const StringList &);
  ~StringList();
  void add(string);
  int positionOf(string);
  bool setNodeVal(int, string);
  vector<string> getAsVector();
};

#endif
