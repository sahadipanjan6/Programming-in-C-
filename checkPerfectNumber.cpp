// Write a C++ program to check if a given number is Perfect or not.

#include<iostream>

using namespace std;

int main()
{
	int number, sum = 0;
	
	cout << "Enter any number: ";
	cin >> number;
	
	// finding the sum of its factors(excluding itself)
	for(int i=1; i<number; i++)
	{
		if(number%i == 0)
			sum += i;
	}
	
	if(sum == number)
		cout << number << " is a Perfect Number" << endl;
	else
		cout << number << " is not a Perfect Number" << endl;
		
	return 0;
}
