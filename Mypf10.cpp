#include<iostream>
using namespace std;
int main() {
	string degree;
	int expyears;
	int testmarks;
	cout << "Enter your degree level" << endl;
	cin >> degree;
	cout << "Enter your years of experience" << endl;
	cin >> expyears;
	cout << "Enter your test marks" << endl;
	cin >> testmarks;
	if (degree == "bachelors" || degree == "masters" || degree == "phd") {
		if (degree == "bachelors") {
			
			if ((expyears<5 && testmarks>=95) || (expyears >= 5 && testmarks >= 80)) {
				cout << "You are eligible for hiring" << endl;
			}
			else {
				cout << "Sorry you are not eligible" << endl;
			}
		}
		else if (degree == "masters") {
			if (expyears >= 3 && testmarks >= 80) {
				cout << "You are eligible for hiring" << endl;
			}
			else {
				cout << "Sorry you are not eligible" << endl;
			}
			
		}
		else {
			cout << "Your are eligible for hiring" << endl;
		}
	}
	else {
		cout << "Error you entered wrong degree" << endl;
	}
	return 0;
}