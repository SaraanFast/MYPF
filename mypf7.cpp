#include<iostream>
using namespace std;
int main() {
	int grade;
	cout << "Enter your grade" << endl;
	cin >> grade;
	(grade >= 50) ? cout << "You passed the exam" << endl : cout << "Sorry you failed the exam" << endl;
	return 0;
}