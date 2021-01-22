#include <iostream>
using namespace std;

int main() {
	int action, first, second, result;
	cout << "Welcome to Calculator by Abragadarba" << endl;

	cout << "What action are we performing? (addition [0], subtraction [1], division [2], multiplication [3]): ";
	cin >> action; 

	if (action == 0) {
		cout << "Enter the first number: ";
		cin >> first;

		cout << "Enter the second number: ";
		cin >> second;

		result = first + second;

		cout << "Sum of numbers: " << result << endl;
	}
	system("pause");
}
