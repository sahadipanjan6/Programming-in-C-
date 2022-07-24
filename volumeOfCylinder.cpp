// Write a C++ program to find and display the volume of a cylinder.

#include<iostream>
#define PI 3.142

using namespace std;

int main()
{
	float radius = 0.0f;
	float height = 0.0f;
	
	cout << "Enter radius of the cylinder: ";
	cin >> radius;
	cout << "Enter height of the cylinder: ";
	cin >> height;
	
	float volume = PI * radius * radius * height;
	cout << "Volume of the Cylinder = " << volume << endl;
	return 0; 
}
