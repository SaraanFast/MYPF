#include<iostream>
using namespace std;
int main() {
	string weather;
	int temp;
	cout << "Enter the weather condition" << endl;
	cin >> weather;
	cout << "Enter the temperature" << endl;
	cin >> temp;
	if (weather == "sunny" || weather == "rainy" || weather == "snowy") {
		if (weather == "sunny") {
			if (temp > 25) {
				cout << "Go to beach" << endl;
			}
			else if (temp >= 15 && temp < 25) {

				cout << "Go for a hike" << endl;
			}
			else {
				cout << "Go play a sport" << endl;
			}
		}
		else if (weather == "rainy") {
			if (temp > 10) {
				cout << "Visit a museum" << endl;

			}
			else {
				cout << "Stay in and read a book" << endl;

			}
		}
		else {
			cout << "Go skiing or snowboarding" << endl;
		}

		
	}
	else {
		cout << "Enter a valid weather condtion" << endl;
	}
	return 0;
}