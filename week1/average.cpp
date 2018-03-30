/**************************************************
 * Date: 3/29/18
 * Author: Alex Cheng
 * Description: A program that outputs the average of 5 input numbers
** ***********************************************/

#include<iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double d;
	double e;
	cout << "Please enter five numbers." << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "The average of those numbers is: " << endl;
	cout << (a+b+c+d+e)/5 << endl;

	return 0;
}
