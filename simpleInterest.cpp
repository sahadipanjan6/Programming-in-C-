// Write a C++ program to calculate Simple Interest.

#include<iostream>

using namespace std;

int main()
{
	float principal = 0.0f;
	float time = 0.0f;
	float rate = 0.0f;
	
	cout << "Enter principal amount: ";
	cin >> principal;
	cout << "Enter time: ";
	cin >> time;
	cout << "Enter rate of interest: ";
	cin >> rate;
	
	float si = (principal * rate * time) / 100;
	cout << "Simple Interest = " << si << endl;
	return 0;
}
