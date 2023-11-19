//game of Odd or Even
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	string userInput;
	int correctGuesses = 0;
	int totalRounds = 0;

	cout << "Welcome to the game of Odd or Even!\n\n";
	cout << "Rules are simple: The computer will generate a number between 1 and 100 and you need to guess whether that number is even or odd.\n\n";
	cout << "Press 'Enter' to continue.";
	getchar();

	cout << "Here we go.\n";
	cout << "Press 'Enter' to continue.";
	system("cls");


	cout << "Choose either even or odd[e/o]: ";
	cin >> userInput;

		if (userInput == "E" || userInput == "e") 
		{
		
			srand(time(NULL));
			int x = rand() % 100;

			cout << "Generated Number: " << x << "\n";

			if (x % 2 == 0) {
				cout << "Congratulations! It's even.\n";
			}
			else {
				cout << "Oops! It's odd.\n";
			}
		}

		else if (userInput == "O" || userInput == "o")
		{

			srand(time(NULL));
			int x = rand() % 100;

			cout << "Generated Number: " << x << "\n";

			if (x % 2 != 0) {
				cout << "Congratulations! It's odd.\n";
			}
			else {
				cout << "Oops! It's even.\n";
			}
		}

		else 
		{
			cout << "Invalid input. Try again.\n";

		}

	return 0;
	system("pause");
}