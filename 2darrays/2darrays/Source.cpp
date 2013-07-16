#include <iostream>

using namespace std;

const int ROWS = 4, COLS = 5;

void addOne(int arr[ROWS][COLS]);

int main()
{
	int test[ROWS][COLS];

	int num = 1;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			test[i][j] = num++;
			cout << test[i][j] << ' ';
		}

		cout << endl;
	}

	cout << endl << "Now that we know what our 2D array looks like, we're going to pass it to a\nfunction.\n"; 

	addOne(test);

	cout << endl << "We're back in main. Did it work?" << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << test[i][j] << ' ';
		}

		cout << endl;
	}

	cout << "\nSo, how are arrays passed? By value or by reference?\n1: Value\n2: Reference\n";
	int temp;
	cin >> temp;

	if (temp != 2)
	{
		cout << "YOU'RE DEAD TO ME";
		cout << "\n__________________________$$$$$$$$$$$$$$$\n_______________________$$$$$$_________$$$$$$\n_____________________$$$$__________________$$$$\n____________________$$$$$$$__________________$$$$\n___________________$$$$_$$$$___________________$$$\n__________________$$$______$$____________________$$\n_________________$$$$______$$_____________________$$\n_________________$$$$_____$$________________$$$____$$\n________________$$$__$$$$$$_____________$$$$$$$$$__$$\n________________$$$____$$_______________$$_____$$$__$$\n________________$$____$$$$$____________$$_______$$__$$\n________________$$___$$$$$$$$$$$$______$$______$$$__$$\n_________________$__$$_$$$$$$$__$$$$$___$$$$_$$$$___$$\n_________________$$_$$__$$$_$$$$$$$$$$$___$$$$______$$\n__________________$_$$_______$$$__$$__$$$___________$$\n__________________$$$$_____________$$$$$$$_________$$\n___________________$$$______________$$__$$_________$$\n_$$$$______________$$$$$________________$$_______$$$\n____$$$$_____________$$$$$$$____________$$______$$$\n__$$$$$$$$$$$_________$$$__$$$$$_______$$_____$$$$\n_____$$$__$$$$$$$$$____$$$_____$$$$$___$$__$$$$$\n___$$$$________$$$$$$$$$$$$$$$____$$$$$$$$$$$$\n__$$$$_______________$$$_____$$$$$$$$$$$\n_______$$____________$$____________$\n_________$$__________$____________$$\n_________$$$$$$$$$$$$$$$$$$_______$$\n______$$$$$$$$_____$$$$$$$$$$$$$__$$\n_________$$$$_______$$____________$$\n_________$$________$$____________$$$\n___________________$$____________$$$\n___________________$$____________$$$\n___________________$$____________$$$\n___________________$$$$$$$$$$$$$$$$$\n____________________$$$$$$$$$$$$$$$\n______________________$$$_______$$$\n_____________________$$$_________$$$\n____________________$$$___________$$$\n___________________$$$$____________$$$\n___________________$$$______________$$$\n__________________$$$________________$$$\n_________________$$$_________________$$$\n________________$$$__________________$$\n_____________$$$$$$_________________$$\n____________$$$$$$_________________$$$";
	}

	else
	{
		cout << "Great job! Gold star. Thumbs up. Whatever it is you kids want these days.";
	}

	cout << endl << endl << "Alright, if there aren't any questions, get to work on your labs!" << endl;

	return 0;
}

void addOne(int arr[ROWS][COLS])
{
	cout << endl << "Did the array make it? Better check..." << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << ' ';
		}

		cout << endl;
	}

	cout << endl << "Phew. We made it. Now we'll add one to each element, and send it back up to\nmain." << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j]++;
		}
	}
}