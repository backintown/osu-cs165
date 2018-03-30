/************************************************
 * Date: 3/29/18
 * Author: Alex Cheng
 * Description: A program that outputs the given temperature(celsius)  in Fahrenheit.
 * ***********************************************/ 
#include<iostream>
using namespace std;

int main() {
	double celsius;	

	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsius;
	cout << "The equivalent Fahrenheit temperature is: " << endl;
	cout << ((9.0/5)*celsius) + 32 << endl;

	return 0;
}
