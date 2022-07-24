// Write a C++ program to find and display the area of a right-angled triangle.

#include<iostream>

using namespace std;

int main()
{
	float base, height = 0.0f;
	float area = 0.0f;
	
	cout << "Enter base of triangle: ";
	cin >> base;
	cout << "Enter height of triangle: ";
	cin >> height;
	area = 0.5 * base * height;
	cout << "Area of triangle = " << area << endl;
	return 0;
}
