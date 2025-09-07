#include<iostream>
using namespace std;
int main() {
	int num, sum;
	int i;
	i = 0;
	sum = 0;
	cout << "Enter a positive number" << endl;
	cin >> num;
	while (num < 0) {
		cout << "Error please enter a positive number" << endl;
		cin >> num;
	}
	while (i <= num){
		
		sum = sum + i;
		i = i + 1;
		}
	cout << "The sum of all numbers from 0 to " << num << " is " << sum << endl;
	return 0;
}