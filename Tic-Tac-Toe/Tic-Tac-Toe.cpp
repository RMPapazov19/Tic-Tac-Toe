#include <iostream>
using namespace std;

char ticTacToeSquares[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int winCheck();
void displayTable();

int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        displayTable();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        if (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            player--;
        }

        else {

            mark = (player == 1) ? 'X' : 'O';

            if (choice == 1 && ticTacToeSquares[1] == '1')

                ticTacToeSquares[1] = mark;
            else if (choice == 2 && ticTacToeSquares[2] == '2')

                ticTacToeSquares[2] = mark;
            else if (choice == 3 && ticTacToeSquares[3] == '3')

                ticTacToeSquares[3] = mark;
            else if (choice == 4 && ticTacToeSquares[4] == '4')

                ticTacToeSquares[4] = mark;
            else if (choice == 5 && ticTacToeSquares[5] == '5')

                ticTacToeSquares[5] = mark;
            else if (choice == 6 && ticTacToeSquares[6] == '6')

                ticTacToeSquares[6] = mark;
            else if (choice == 7 && ticTacToeSquares[7] == '7')

                ticTacToeSquares[7] = mark;
            else if (choice == 8 && ticTacToeSquares[8] == '8')

                ticTacToeSquares[8] = mark;
            else if (choice == 9 && ticTacToeSquares[9] == '9')

                ticTacToeSquares[9] = mark;
            else
            {
                cout << "Incorrect input ";

                player--;
                cin.ignore();
                cin.get();
            }
        }
        i = winCheck();

        player++;
    } while (i == -1);
    displayTable();
    if (i == 1)

        cout << "==>\aPlayer " << --player << " win ";
    else
        cout << "==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int winCheck()
{
    if (ticTacToeSquares[1] == ticTacToeSquares[2] && ticTacToeSquares[2] == ticTacToeSquares[3])

        return 1;
    else if (ticTacToeSquares[4] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[6])

        return 1;
    else if (ticTacToeSquares[7] == ticTacToeSquares[8] && ticTacToeSquares[8] == ticTacToeSquares[9])

        return 1;
    else if (ticTacToeSquares[1] == ticTacToeSquares[4] && ticTacToeSquares[4] == ticTacToeSquares[7])

        return 1;
    else if (ticTacToeSquares[2] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[8])

        return 1;
    else if (ticTacToeSquares[3] == ticTacToeSquares[6] && ticTacToeSquares[6] == ticTacToeSquares[9])

        return 1;
    else if (ticTacToeSquares[1] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[9])

        return 1;
    else if (ticTacToeSquares[3] == ticTacToeSquares[5] && ticTacToeSquares[5] == ticTacToeSquares[7])

        return 1;
    else if (ticTacToeSquares[1] != '1' && ticTacToeSquares[2] != '2' && ticTacToeSquares[3] != '3'
        && ticTacToeSquares[4] != '4' && ticTacToeSquares[5] != '5' && ticTacToeSquares[6] != '6'
        && ticTacToeSquares[7] != '7' && ticTacToeSquares[8] != '8' && ticTacToeSquares[9] != '9')

        return 0;
    else
        return -1;
}

void displayTable()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << ticTacToeSquares[1] << "  |  " << ticTacToeSquares[2] << "  |  " << ticTacToeSquares[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << ticTacToeSquares[4] << "  |  " << ticTacToeSquares[5] << "  |  " << ticTacToeSquares[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << ticTacToeSquares[7] << "  |  " << ticTacToeSquares[8] << "  |  " << ticTacToeSquares[9] << endl;

    cout << "     |     |     " << endl << endl;
}
