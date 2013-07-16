#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <ctime>
#include "class.h"

using namespace std;

void menu();
void cinreview();
void loops();
void files();
void manip();
void types();
void pass();
void val(int);
void ref(int&);
void classes();
void arrs();
void objarrs();
void vec();

int main()
{
	cout << "Welcome to the last day of lab!";

	menu();

	cout << "It's been an awesome year! Thanks guys!" << endl << endl;

	return 0;
}

void menu()
{
	int choice;

	do
	{
		cout << "\n\nWhich would you like to review?\n";
		cout << "1. Cin\n"
			 << "2. Loops\n"
			 << "3. Reading to/from Files\n"
			 << "4. Formatting Output\n"
			 << "5. Typecasting\n"
			 << "6. Passing by value/reference\n"
			 << "7. Classes\n"
			 << "8. Arrays\n"
			 << "9. Arrays of Objects\n"
			 << "10. Vectors\n"
			 << "Enter any other integer to end...\n";
		
		cin >> choice;
		cout << endl;

		if (choice < 0 || choice > 10) break;

		switch (choice)
		{
		case 1:
			cinreview();
			break;
		case 2:
			loops();
			break;
		case 3:
			files();
			break;
		case 4:
			manip();
			break;
		case 5:
			types();
			break;
		case 6:
			pass();
			break;
		case 7:
			classes();
			break;
		case 8:
			arrs();
			break;
		case 9:
			objarrs();
			break;
		case 10:
			vec();
			break;
		}
	} while (choice > 0 && choice < 11);
}

void cinreview()
{
	string stuff;
	cout << "Enter some stuff.\n";
	cin.ignore();
	getline(cin, stuff);
	cout << stuff;
	cout << endl;
}

void loops()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i+1 << endl;
	}

	int total = 0;

	cout << endl;

	while (total < 10)
	{
		cout << ++total << endl;
	}

	total = 0;
	cout << endl;

	do
	{
		cout << ++ total << endl;
	} while (total < 10);
}

void files()
{
	ifstream fin;
	fin.open("text.txt");

	string temp;

	ofstream fout;
	fout.open("outtext.txt");

	if (!fin)
	{
		cout << "Failed to open text.txt" << endl;
		return;
	}

	string words[5];
	int count = 0;

	while (!fin.eof())
	{
		fin >> temp;
		fout << temp << " ";

		words[count] = temp;
		count++;
	}
}

void manip()
{
	for (int i = 0; i < 20; i++)
	{
		cout << setw(16) << left << i+1;
	}
}

void types()
{
	int num1 = 5, num2 = 10;

	cout << num1 << " divided by " << num2 << " = " << num1/num2 << endl;

	cout << "But, " << num1 << " divided by " << num2 << " = " << static_cast<double>(num1)/num2 << endl;
}

void pass()
{
	int test = 10;

	val(test);
	cout << test << endl;

	ref(test);
	cout << test << endl;
}

void val(int num)
{
	num += 100000;
}

void ref(int & num)
{
	num += 10;
}

void classes()
{
	myClass obj;
	myClass obj1(4, 5);
	obj.setData(10);
	cout << obj.getData() << endl;
}

void arrs()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	int arr2[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr2[i][j] << " ";
		}

		cout << endl;
	}
}

void objarrs()
{
	myClass arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i].setData(i);
		arr[i].setData2(i+1);
		cout << arr[i].getData() << endl;
	}
}

void vec()
{
	vector <int> vec1;

	for (int i = 0; i < 10; i++)
	{
		vec1.push_back(i);

		cout << vec1[i] << endl;
	}

	for (int i = 10; i > 0; i--)
	{
		vec1.pop_back();
	}
}