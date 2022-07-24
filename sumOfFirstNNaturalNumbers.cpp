// Write a C++ program to display the sum of first N natural numbers.

#include<iostream>

using namespace std;

int main()
{
	int N = 0;
	int sum = 0;
	
	cout << "Enter value of N: ";
	cin >> N;
	
	for(int i=1; i<=N; i++)
		sum += i;
		
	cout << "Sum of first " << N << " natural numbers = " << sum << endl;
	return 0;	
}
