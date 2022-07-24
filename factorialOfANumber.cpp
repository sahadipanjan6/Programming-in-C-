// Write a C++ program to calculate the factorial of a given number.

#include<iostream>

using namespace std;

int main()
{
	int number = 0;
	int fact = 1;
	
	cout << "Enter any number: ";
	cin >> number;
	
	for(int i=number; i>=1; i--)
		fact *= i;
	
	cout << "Factorial of " << number << " = " << fact << endl;
	return 0;
}
