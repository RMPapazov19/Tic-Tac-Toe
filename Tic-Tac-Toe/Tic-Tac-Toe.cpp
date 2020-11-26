#include <iostream>
using namespace std;

void displayTable(int sign[])
{
	char displayer[9];

	for (int i = 0;i < 9; i++)
	{
		if (sign[i] == 0) {
			displayer[i] = ' ';
		}
		if (sign[i] == 1) {
			displayer[i] = 'X';
		}
		if (sign[i] == 2) {
			displayer[i] = 'O';
		}
	}

	cout << "           |     |     " << endl;
	cout << "        " << displayer[0] << "  |  " << displayer[1] << "  |  " << displayer[2] << endl;
	cout << "      _____|_____|_____" << endl;
	cout << "           |     |     " << endl;
	cout << "        " << displayer[3] << "  |  " << displayer[4] << "  |  " << displayer[5] << endl;
	cout << "      _____|_____|_____" << endl;
	cout << "           |     |     " << endl;
	cout << "        " << displayer[6] << "  |  " << displayer[7] << "  |  " << displayer[8] << endl;
	cout << "           |     |     " << endl << endl;
}

void greeting()
{
	cout << "			Main Menu" << endl;
	cout << "Type 1 to Play the Game" << endl;
	cout << "Type 0 to Exit the Game" << endl;
}

bool mainMenu()
{
	char menuOption;
	
	cin >> menuOption;

	switch (menuOption)

	{
	case '1': 
		return true;
		break;

	case '0':
		return false;
		break;

	default: 
		cout << "Incorrect input" << endl;
		mainMenu();
		break;
	}
}


int main()
{
	int ticTacToeSquares[9] = { 1,0,0,2,0,0,0,1,2 };
	greeting();
	bool exitProgram;
	displayTable(ticTacToeSquares);
/*
	do {
		exitProgram=mainMenu();
	} while (exitProgram); 
*/
	
}