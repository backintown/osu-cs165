/*************************************
 ** Author: Alex Cheng
 ** Date: 4/5/2018
 ** Description:
 ** This program will ask the user for a filename
 ** they wish to open and output the sum of the
 ** integers in the file into another file called "sum.txt".
 *************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main() {
  string fileName;
  ifstream inputFile;
  cout << "Please enter the filename." << endl;
  cin >> fileName;
  int value, total;
  inputFile.open(fileName);
  if (inputFile) {
    while (inputFile >> value) {
      cout << value << endl;
      total += value;
    }
    inputFile.close();
    ofstream outputFile("sum.txt");
    outputFile << total;
    outputFile.close();
  } else {
    cout << "could not access file" << endl;
  }

  return 0;
}