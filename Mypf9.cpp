#include<iostream>
using namespace std;
int main() {
	string dest;
	int weight;
	cout << "Enter destination type" << endl;
	cin >> dest;
	cout << "Enter weight" << endl;
	cin >> weight;
	if (dest == "domestic" || dest == "international") {
		if (dest == "domestic") {
			if (weight < 5) {
				cout << "The price is 5 dollars" << endl;
			}
			else {
				cout << "The price is 10 dollars" << endl;

			}
		}
		else {
			if (weight < 1) {
				cout << "The price is 15 dollars" << endl;
			}
			else if (weight >= 1 && weight < 10) {
				cout << "The price is 25 dollars" << endl;
			}
			else {
				cout << "The price is 50 dollars" << endl;
			}
		}
	}
	else {
		cout << "Enter correct detination" << endl;
	}
	return 0;
}