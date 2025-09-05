#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter the number to check if it is even or odd" << endl;
	
	if (!(cin >> num)) {
		cout << "Error please input a valid number" << endl;
		
	}
	else{

		if (num % 2 == 0) {
			cout << "number is even" << endl;

		}
		else  {
			cout << "Number is odd" << endl;


		}
		
	}
	return 0;
}