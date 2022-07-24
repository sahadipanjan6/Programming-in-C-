// Write a C++ program to calculate the distance between 2 given points.

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x1, y1, x2, y2 = 0.0f;
	
	cout << "Enter 1st point(X,Y): ";
	cin >> x1 >> y1;
	cout << "Enter 2nd point(X,Y): ";
	cin >> x2 >> y2;
	
	float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "Distance between Points = " << distance << endl;
	return 0;
}
