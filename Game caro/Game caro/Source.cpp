#include <iostream>
#include <string>
using namespace std;

string player1, player2;

int checkwin(char table[10]);
void board(string player1, string player2, char table[10]);

int main()
{
	while (1)
	{
		char table[10] = { '0','1','2','3','4','5','6','7','8','9' };
		system("cls");
		int player = 1, i, choice;

		cout << "3x3 - 2 PLAYERS - CARO BOARD (Use NumPad for optimal gameplay)" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "Insert player 1's name (No space between characters)" << endl;
		cin >> player1;
		cout << endl;
		cout << "Insert player 2's name (No space between characters)" << endl;
		cin >> player2;
		cout << endl;

		char mark;
		do
		{
			board(player1, player2, table);
			player = (player % 2) ? 1 : 2;
			if (player == 1)
			{
				cout << "Player " << player1 << ", enter a number:  ";
				cin >> choice;
			}
			else if (player == 2)
			{
				cout << "Player " << player2 << ", enter a number:  ";
				cin >> choice;
			}

			mark = (player == 1) ? 'X' : 'O';

			if (choice == 1 && table[1] == '1')

				table[1] = mark;
			else if (choice == 2 && table[2] == '2')

				table[2] = mark;
			else if (choice == 3 && table[3] == '3')

				table[3] = mark;
			else if (choice == 4 && table[4] == '4')

				table[4] = mark;
			else if (choice == 5 && table[5] == '5')

				table[5] = mark;
			else if (choice == 6 && table[6] == '6')

				table[6] = mark;
			else if (choice == 7 && table[7] == '7')

				table[7] = mark;
			else if (choice == 8 && table[8] == '8')

				table[8] = mark;
			else if (choice == 9 && table[9] == '9')

				table[9] = mark;
			else
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			i = checkwin(table);

			player++;
		} while (i == -1);
		board(player1, player2, table);
		if (i == 1)
		{
			if (player == 1)
			{
				cout << "==>\aPlayer " << player1 << " win ";
			}
			else
			{
				cout << "==>\aPlayer " << player2 << " win ";
			}
		}
		else
			cout << "==>\aGame draw";

		cin.ignore();
		cin.get();

		char o;
		cout << "Do you want play again? (y/n): ";
		cin >> o;
		if (o == 'n')
		{
			break;
		}
	}
		
	system("pause");
	return 0;
}

int checkwin(char table[10] )
{
	if (table[1] == table[2] && table[2] == table[3])

		return 1;
	else if (table[4] == table[5] && table[5] == table[6])

		return 1;
	else if (table[7] == table[8] && table[8] == table[9])

		return 1;
	else if (table[1] == table[4] && table[4] == table[7])

		return 1;
	else if (table[2] == table[5] && table[5] == table[8])

		return 1;
	else if (table[3] == table[6] && table[6] == table[9])

		return 1;
	else if (table[1] == table[5] && table[5] == table[9])

		return 1;
	else if (table[3] == table[5] && table[5] == table[7])

		return 1;
	else if (table[1] != '1' && table[2] != '2' && table[3] != '3'
		&& table[4] != '4' && table[5] != '5' && table[6] != '6'
		&& table[7] != '7' && table[8] != '8' && table[9] != '9')

		return 0;
	else
		return -1;
}


void board(string player1, string player2, char table[10] )
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player " << player1 << "(X) - Player " << player2 << " (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << table[1] << "  |  " << table[2] << "  |  " << table[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << table[4] << "  |  " << table[5] << "  |  " << table[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << table[7] << "  |  " << table[8] << "  |  " << table[9] << endl;

	cout << "     |     |     " << endl << endl;
}
