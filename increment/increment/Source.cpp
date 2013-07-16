#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0, n = 3;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			num1++;
		}
	}

	cout << num1 << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			num2++;
		}
	}

	/*
	string foo = "hello";

	for (auto i: foo)
	{
		cout << "The next element of foo is: " << i << endl;
	}*/
}