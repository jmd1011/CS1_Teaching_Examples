#include <iostream>

using namespace std;

int main()
{
	int num1;
	int divisor;

	cout  << "Pick a number:\n";
	cin >> num1;

	cout << "Divisor?" << endl;
	cin >> divisor;

	cout << "\nNum1 = " << num1 << "\n";

	cout << "Results:\n";
	cout << num1/divisor << endl;

	return 0;
}