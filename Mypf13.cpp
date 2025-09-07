#include<iostream>
using namespace std;
int main() {
	int num;
	int tries;
	tries = 0;
	cout << "Enter a integer in the range of 0-10 " << endl;
	cin >> num;
	while (num < 0 || num>10) {
		cout << "Error please enter a number in given range" << endl;
		cin >> num;
	}
	while (num!= 0) {
		
		if (num > 5) {
			tries = tries + 1;
			cout << "No number you guessed is too big,try again" << endl;
			cin >> num;

		}
		else if (num > 2 && num <= 5) {
			tries = tries + 1;
			cout << "close but no cigar,try again" << endl;
			cin >> num;
		}
		else if (num > 0 && num <= 2) {
			tries = tries + 1;
			cout << "You are very close,try again" << endl;
			cin >> num;
		}
		
		}
	if (num == 0) {
		tries = tries + 1;
		cout << "Congratulations you guessed the correct number and it took you " << tries << " tries to guess" << endl;
		}
	}
