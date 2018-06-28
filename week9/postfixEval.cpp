/*****************************
 ** Date: 5/30/2018
 ** Author: Alex Cheng
 ** Description:
    This program takes in a c-string of numbers and operators and calculates the
result using postfix evaluation.
******************************/
#include <cstring>
#include <iostream>
#include <stack>
using std::atof;
using std::cout;
using std::endl;
using std::isdigit;
using std::stack;
using std::strtok;

/*
calc - A helper function that calculates the result of two numbers and the
operator.
*/
double calc(double num1, double num2, char op) {
  if (op == '+')
    return num2 + num1;
  else if (op == '-')
    return num2 - num1;
  else if (op == '*')
    return num2 * num1;
  else
    return num2 / num1;
}

/*
postfixEval - This function takes in a c-string representing a postfix
expression and returns the result. It loops through the c-string using strtok to
get each token, then if the string is a number, it pushes it onto the stack. If
the string is an operator, it pops the two previous numbers off the stack and
calculates the result using the "calc" function and pushes the result onto the
stack. It returns stack.top() at the end.
*/
double postfixEval(char str[]) {
  double num1 = 0;
  double num2 = 0;
  stack<double> stack;
  // loop through tokens in the c-string
  for (char *token = strtok(str, " "); token != NULL;
       token = strtok(NULL, " ")) {
    if (isdigit(*token)) { // check if token is a number
      stack.push(atof(token));
    } else { // token is an operator
      num1 = stack.top();
      stack.pop();
      num2 = stack.top();
      stack.pop();
      stack.push(calc(num1, num2, *token));
    }
  }
  return stack.top();
}

int main() {
  char str[] = "25 12 7 34 80 200 - 2 * / + - *";
  char str2[] = "14 21 -";
  cout << postfixEval(str) << endl;
  cout << postfixEval(str2) << endl;

  return 0;
}
