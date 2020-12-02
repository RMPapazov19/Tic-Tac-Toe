#include <iostream>

using namespace std;
int player = 0;

void displayTable(char sign[])//displays the table where you play
{
    system("CLS");
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

int checkInput()//Checks if the input is correct
{
    int data;
    bool validInput;

    do {
        cin >> data;//Return user input
        if (!(validInput = cin.good()))//Checks if the input is correct
        {
            cout << "Invalid Input" << endl;
            cin.clear();//Clear error flags
            cin.ignore(INT_MAX, '\n');//Discard the row
        }
    } while (!validInput);
    return data;//Return user input
}

void greeting()//displays main menu function
{
    cout << "           Main Menu" << endl;
    cout << "Type 1 to Play the Game" << endl;
    cout << "Type 0 to Exit the Game" << endl;
}

int winCheck(char ticTacToeSquares[])//checks if the game has ended
{//all the ifs check if there are 3 matching inputs
 //the other ifs check which player has won the game
    if (ticTacToeSquares[1] == ticTacToeSquares[2] && ticTacToeSquares[2] == ticTacToeSquares[3])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[4] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[6])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[7] == ticTacToeSquares[8] && ticTacToeSquares[8] == ticTacToeSquares[9])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[3] == ticTacToeSquares[6] && ticTacToeSquares[6] == ticTacToeSquares[9])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[1] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[9])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[3] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[7])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[1] == ticTacToeSquares[4] && ticTacToeSquares[4] == ticTacToeSquares[7])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[2] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[8])
    {
        if (player % 2 != 0)
        {
            cout << "***********************************\n";
            cout << "* Game over! The first player wins!         *\n";
            cout << "***********************************\n";
        }
        else {
            cout << "***********************************\n";
            cout << "* Game over! The second player wins!         *\n";
            cout << "***********************************\n";
        }
        return false;
    }

    else if (ticTacToeSquares[1] != '1' && ticTacToeSquares[2] != '2' && ticTacToeSquares[3] != '3' && ticTacToeSquares[4] != '4' && ticTacToeSquares[5] != '5' && ticTacToeSquares[6] != '6' && ticTacToeSquares[7] != '7' && ticTacToeSquares[8] != '8' && ticTacToeSquares[9] != '9')
    {
        cout << "***********************************\n";
        cout << "* Game over! DRAW!         *\n";
        cout << "***********************************\n";
        return false;
    }
    else {
        return true;
    }
}

void input(char ticTacToeSquares[], char playerInput)//one of the functions that check if the input is correct
{
    cout << "Please enter number between 1-9" << endl;
    int userInput = checkInput();//user input accepts the value
    if (userInput < 0 || userInput > 9)//check for user input
    {
        cout << "Invalid Input" << endl;
        input(ticTacToeSquares, playerInput);
    }

    if (ticTacToeSquares[userInput] != 'O')//check for user input
    {
        ticTacToeSquares[userInput] = playerInput;
    }

    else if (ticTacToeSquares[userInput] != 'X')//check for user input
    {
        ticTacToeSquares[userInput] = playerInput;
    }
}

void playGame(char ticTac[], int turnSwaper)//places users choices 
{
    do
    {
        if (turnSwaper % 2 == 0)//which user
        {
            displayTable(ticTac);
            input(ticTac, 'X');
            player++;
        }
        else {
            displayTable(ticTac);
            input(ticTac, 'O');
            player++;
        }
        turnSwaper++;
    } while (winCheck(ticTac) != false);

    greeting();//main menu
}

bool mainMenu(char ticTac[], int turnSwaper)//checks what user choiced in main menu
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

    default://if the input is not 1 or 0
        cout << "Incorrect input" << endl;
        mainMenu(ticTac, turnSwaper);//ask the user to input again
        break;
    }
}

int main()
{
    int turnSwaper = 0;
    char ticTacToeSquares[10] = { '0','1','2','3','4','5' ,'6','7','8','9' };
    greeting();//main menu
    bool exitProgram;

    do {//finishes or restart the program
        exitProgram = mainMenu(ticTacToeSquares, turnSwaper);
        for (int i = 0; i < 10; i++)
        {
            ticTacToeSquares[i] = (char)i + 48;//replaces converted integer into char and replaces in array
        }
    } while (exitProgram);
}