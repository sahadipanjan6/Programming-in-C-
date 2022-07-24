// Write a C++ program to find smallest and largest amongst 3 given numbers.

#include<iostream>

using namespace std;

int main()
{
	int num1, num2, num3 = 0;
	
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	
	// finding smallest number
	if(num1<num2 && num1<num3)
		cout << "Smallest Number = " << num1 << endl;
	else if(num2<num1 && num2<num3)
		cout << "Smallest Number = " << num2 << endl;
	else
		cout << "Smallest Number = " << num3 << endl;
		
	// finding largest number
	if(num1>num2 && num1>num3)
		cout << "Largest Number = " << num1 << endl;
	else if(num2>num1 && num2>num3)
		cout << "Largest Number = " << num2 << endl;
	else
		cout << "Largest Number = " << num3 << endl;
		
	return 0;
}
