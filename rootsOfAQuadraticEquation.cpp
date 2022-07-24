// Write a C++ program to display the roots of a Quadratic Equation whose coefficients are given.

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int A, B, C = 0;
	int D = 0;
	
	cout << "Enter value of Coefficient A: ";
	cin >> A;
	cout << "Enter value of Coefficient B: ";
	cin >> B;
	cout << "Enter value of Coefficient C: ";
	cin >> C;
	
	// calculating the discriminant
	D = B*B - 4*A*C;
	
	if(D == 0)
		cout << "Roots are equal with a value of: " << ((-B)/(2*A)) << endl;
	
	else if(D < 0)
		cout << "Roots are imaginary !!!" << endl;
	
	else
	{
		cout << "First Root: " << ((-B + sqrt(D)) / (2*A)) << endl;
		cout << "Second Root: " << ((-B - sqrt(D)) / (2*A)) << endl;
	}
		
	return 0;	
}
