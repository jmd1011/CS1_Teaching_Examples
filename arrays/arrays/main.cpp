#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int SIZE = 26;

	int arr1[SIZE];
	char arr2[SIZE];
	char test = 'a';

	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = i;
	}

	for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = test++;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << ++arr1[i] << ": " << arr2[i] << endl;
	}

	ifstream fin;
	fin.open("example.txt");

	char arr3[SIZE];

	cout << endl << "Testing reading in from a file..." << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		fin >> arr3[i];
		cout << arr1[i] << ": " << arr3[i] << endl;
	}

	cout << endl;

	return 0;
}