#include <iostream>
using namespace std;

int main() {
	int action;
	double first, second, result;
	cout << "Welcome to Calculator by Abragadarba" << endl;

	cout << "What action are we performing? (addition [0], subtraction [1], division [2], multiplication [3]): ";
	cin >> action; 
	//ADDITON
	if (action == 0) {
		cout << "Enter the first number: ";
		cin >> first;

		cout << "Enter the second number: ";
		cin >> second;

		result = first + second;

		cout << "Sum of numbers: " << result << endl;
	}
	//SUBTRACTION
	else if (action == 1) {
		cout << "Enter the first number: ";
		cin >> first;

		cout << "Enter the second number: ";
		cin >> second;

		result = first - second;

		cout << "The result of dividing numbers : " << result << endl;
	}
	//DIVISION
	else if (action == 2) {
		cout << "Enter the first number: ";
		cin >> first;

		cout << "Enter the second number: ";
		cin >> second;

		result = first / second;

		cout << "The result of dividing numbers: " << result << endl;
	}
	//MULTIPLICATION
	else if (action == 3) {
		cout << "Enter the first number: ";
		cin >> first;

		cout << "Enter the second number: ";
		cin >> second;

		result = first * second;

		cout << "The result of multiplying numbers: " << result << endl;
	}
	else {
		cout << "ERROR! Wrong action!" << endl;
	}
	system("pause");
}
