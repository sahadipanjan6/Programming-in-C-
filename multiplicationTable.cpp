// Write a C++ program to display the multiplication table of a given number up to N terms.

#include<iostream>

using namespace std;

int main()
{
	int number, terms = 0;
	
	cout << "Enter any number: ";
	cin >> number;
	cout << "Enter no. of terms: ";
	cin >> terms;
	cout << "Multiplication Table of " << number << " upto " << terms << " terms is: " << endl << endl;
	for(int i=1; i<=terms; i++)
		cout << number << " x " << i << " = " << (number*i) << endl;
}
