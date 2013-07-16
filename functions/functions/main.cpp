#include <iostream>

using namespace std;

void start();
char getChoice();
void tryagain();
void end(char);

int main()
{
	start();

	char choice = getChoice();

	while (choice != 'y' && choice != 'Y')
	{
		tryagain();
		choice = getChoice();
	}

	end('y');

	return 0;
}

void start()
{
	cout << "Today, we're going to learn about functions. Excited?\nType 'y' or 'Y' for yes.\n";
}

char getChoice()
{
	char choice;
	cin >> choice;

	return choice;
}

void tryagain()
{
	cout << "\nTry again. I asked, are you excited?\nType 'y' or 'Y' for yes.\n";
}

void end(char let)
{
	int example_variable;
	if (let == 'y' || let == 'Y')
		cout << "\nI'm glad that you are excited. Let's get to work!\n";
}