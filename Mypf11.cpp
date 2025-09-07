#include<iostream>
using namespace std;
int main() {
	
	int cred, income;
	
	cout << "Enter your credit score" << endl;
	cin >> cred;
	cout << "Enter your income" << endl;
	cin >> income;
	if (income >= 75000 && cred >= 750) {
		cout << "You are eligible for gold card" << endl;
	}
	else if (income >= 80000 && (cred >= 650 && cred < 750)) {
		cout << "You are eligible for premium silver card" << endl;
	}
	else if (income >= 40000 && cred >= 650) {
		cout << "You are eligible for silver card" << endl;

	}
	else {
		cout << "Application Denied: Low credit score." << endl;
	}
	return 0;
}