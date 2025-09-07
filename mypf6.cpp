#include<iostream>
using namespace std;
int main() {
	char op;
	float num1, num2, result;
	cout << "********************CALCULATOR********************" << endl;
	cout << "                                                             " << endl;
	cout << "Enter a operation( +,-,*,/)" << endl;
	cin >> op;
	cout << "Enter the first number" << endl;
	cin >> num1;
	cout << "Enter the second number" << endl;
	cin >> num2;
	 switch(op) {
	 case '+': 
		 result = num1 + num2;
		 cout << "The sum of two number is" << result << endl;
		 break;
	 case '-': 
		 if (num1 > num2) {
			 result = num1 - num2;
			 cout << "The difference of two number is " << result << endl;
		 }
		 else {
			 result = num2 - num1;
			 cout << "The difference of two number is " << result << endl;
		 }
		 break;
	 case '*': 
		 result = num1 * num2;
		 cout << "The product of two number is " << result << endl;
		 break;
	 case '/':
		 result = num1 / num2;
		 cout << "The division of two number is " << result << endl;
		 break;
	 default:
		 cout << "Please enter a valid operation" << endl;
	}
	 return 0;
}