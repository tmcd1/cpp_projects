// This program is designed to take two inputs from the command line
//   and output the difference between the two numbers to the command line

#include<iostream>
using namespace std;

int main() {
	float a, b, difference;
	cout << "What's the first number? ";
	cin >> a;

	cout << "What's the second number? ";
	cin >> b;

	if(a > b) {
		difference = a - b;
	} else if (a < b) {
		difference = b - a;
	} else if (a == b) {
		difference = 0;
	}
	
	cout << "The difference between the numbers is: "
	     << difference << endl;
	
}
