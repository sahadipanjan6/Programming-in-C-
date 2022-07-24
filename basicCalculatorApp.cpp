// Write a C++ program to build a menu-driven calculator app.

#include<iostream>

using namespace std;

int main()
{
	int num1, num2, choice = 0;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	cout << endl;
	cout << "Press 1 for ADDITION" << endl;
	cout << "Press 2 for SUBTRACTION" << endl;
	cout << "Press 3 for MULTIPLICATION" << endl;
	cout << "Press 4 for DIVISION" << endl;
	cout << "Press 5 for MODULO-DIVISION" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
				cout << "Result of Addition = " << (num1+num2) << endl;
				break;
		
		case 2:
				cout << "Result of Subtraction = " << (num1-num2) << endl;
				break;
				
		case 3:
				cout << "Result of Multiplication = " << (num1*num2) << endl;
				break;
				
		case 4:
				if(num2 == 0)
					cout << "Division by Zero is not possible !!!" << endl;
				else
					cout << "Result of Division = " << (num1/num2) << endl;
				
				break;
				
		case 5:
				if(num2 == 0)
					cout << "Modulo-division by Zero is not possible !!!" << endl;
				else
					cout << "Remainder obtained = " << (num1%num2) << endl;
				
				break;
				
		default:
				cout << "You have entered a wrong choice !!!" << endl;
	}
}
