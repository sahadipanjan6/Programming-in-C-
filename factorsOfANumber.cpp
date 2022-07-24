// Write a C++ program to display the factors of a given number(including itself).

#include<iostream>

using namespace std;

int main()
{
	int number = 0;
	
	cout << "Enter any number: ";
	cin >> number;
	
	cout << "Factors of " << number << " are: " << endl;
	for(int i=1; i<=number; i++)
	{
		if(number%i == 0)
			cout << i << " ";
	}
	return 0;
}
