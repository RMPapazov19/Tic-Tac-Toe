#include <iostream>
using namespace std;

void displayTable(char sign[])
{

	cout << "           |     |     " << endl;
	cout << "        " << sign[1] << "  |  " << sign[2] << "  |  " << sign[3] << endl;
	cout << "      _____|_____|_____" << endl;
	cout << "           |     |     " << endl;
	cout << "        " << sign[4] << "  |  " << sign[5] << "  |  " << sign[6] << endl;
	cout << "      _____|_____|_____" << endl;
	cout << "           |     |     " << endl;
	cout << "        " << sign[7] << "  |  " << sign[8] << "  |  " << sign[9] << endl;
	cout << "           |     |     " << endl << endl;
}

int checkInput()
{
	int data;
	bool validInput;
	do {
		cin >> data;
		if (!(validInput = cin.good()))//Checks if the input is correct
		{
			cout << "Invalid Input" << endl;
			cin.clear();//Clear error flags
			cin.ignore(INT_MAX, '\n');//Discard the row
		}
	} while (!validInput);
	return data;//Return user input
}

void greeting()
{
	cout << "			Main Menu" << endl;
	cout << "Type 1 to Play the Game" << endl;
	cout << "Type 0 to Exit the Game" << endl;
}

int winCheck(char ticTacToeSquares[])
{
	if (ticTacToeSquares[1] == ticTacToeSquares[2] && ticTacToeSquares[2] == ticTacToeSquares[3])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[4] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[6])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[7] == ticTacToeSquares[8] && ticTacToeSquares[8] == ticTacToeSquares[9])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[3] == ticTacToeSquares[6] && ticTacToeSquares[6] == ticTacToeSquares[9])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[1] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[9])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[3] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[7])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[1] == ticTacToeSquares[4] && ticTacToeSquares[4] == ticTacToeSquares[7])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[2] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[8])
	{
		cout << "END GAME" << endl;
		return false;
	}

	else if (ticTacToeSquares[1] != '1' && ticTacToeSquares[2] != '2' && ticTacToeSquares[3] != '3' && ticTacToeSquares[4] != '4' && ticTacToeSquares[5] != '5' && ticTacToeSquares[6] != '6' && ticTacToeSquares[7] != '7' && ticTacToeSquares[8] != '8' && ticTacToeSquares[9] != '9')
	{
		cout << "DRAW" << endl;
		return false;
	}
	else {
		return true;
	}
}

void input(char ticTacToeSquares[], char playerInput)
{
	cout << "Please enter number between 1-9" << endl;
	int userInput = checkInput();
	if (userInput < 0 || userInput > 9)
	{
		cout << "Invalid Input" << endl;
		input(ticTacToeSquares, playerInput);
	}
	if (ticTacToeSquares[userInput] != 'O' || ticTacToeSquares[userInput] != 'X')
	{
		ticTacToeSquares[userInput] = playerInput;
	}
}

void playGame(char ticTac[], int turnSwaper) {
	do
	{
		if (turnSwaper % 2 == 0)
		{
			displayTable(ticTac);
			input(ticTac, 'X');
		}
		else {
			displayTable(ticTac);
			input(ticTac, 'O');
		}
		turnSwaper++;
	} while (winCheck(ticTac) != false);

	greeting();
}

bool mainMenu(char ticTac[], int turnSwaper)
{
	char menuOption;

	cin >> menuOption;

	switch (menuOption)

	{
	case '1':
		playGame(ticTac, turnSwaper);
		return true;
		break;

	case '0':
		return false;
		break;

	default:
		cout << "Incorrect input" << endl;
		mainMenu(ticTac, turnSwaper);
		break;
	}
}

int main()
{
	int turnSwaper = 0;
	char ticTacToeSquares[10] = { '0','1','2','3','4','5' ,'6','7','8','9' };
	greeting();
	bool exitProgram;

	do {
		exitProgram = mainMenu(ticTacToeSquares, turnSwaper);
	} while (exitProgram);
}