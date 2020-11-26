#include <iostream>
using namespace std;

bool mainMenu()
{
	char menuOption;
	cout << "Main Menu" << endl;
	cout << "Type 1 to Play the Game" << endl;
	cout << "Type 0 to Exit the Game" << endl;

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
		mainMenu();
		break;
	}
}


int main()
{
	int ticTacToeSquares[9] = { 0,0,0,0,0,0,0,0,0 };
	bool exitProgram;
	do {
		exitProgram=mainMenu();
	} while (exitProgram);
	

	
}