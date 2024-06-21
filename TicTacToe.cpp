#include "TicTacToe.h"
#include "Board.h"
#include<iostream>

using namespace std;

void TicTacToe::input(int r, int c, char m)
{
	b.setArray(r, c, m);
}
void TicTacToe::print()
{
	cout << "\n   Displaying the board:\n " << endl;
	b.display();
	cout << "\n";
}
bool TicTacToe::checkError(int r, int c)
{
	if (r < 3 && c < 3)
	{
		if (b.getArr()[r][c] == ' ')
			return false;
		else
			return true;
	}
	else
		return true;
}
int TicTacToe::win()
{
	if (b.getArr()[0][0] == 'X' && b.getArr()[0][1] == 'X' && b.getArr()[0][2] == 'X' ||
		b.getArr()[1][0] == 'X' && b.getArr()[1][1] == 'X' && b.getArr()[1][2] == 'X' ||
		b.getArr()[2][0] == 'X' && b.getArr()[2][1] == 'X' && b.getArr()[2][2] == 'X' ||
		b.getArr()[0][0] == 'X' && b.getArr()[1][0] == 'X' && b.getArr()[2][0] == 'X' ||
		b.getArr()[0][1] == 'X' && b.getArr()[1][1] == 'X' && b.getArr()[2][1] == 'X' ||
		b.getArr()[0][2] == 'X' && b.getArr()[1][2] == 'X' && b.getArr()[2][2] == 'X' ||
		b.getArr()[0][0] == 'X' && b.getArr()[1][1] == 'X' && b.getArr()[2][2] == 'X' ||
		b.getArr()[0][2] == 'X' && b.getArr()[1][1] == 'X' && b.getArr()[2][0] == 'X'    )
		return 1;

	else if 
	   (b.getArr()[0][0] == 'O' && b.getArr()[0][1] == 'O' && b.getArr()[0][2] == 'O' ||
		b.getArr()[1][0] == 'O' && b.getArr()[1][1] == 'O' && b.getArr()[1][2] == 'O' ||
		b.getArr()[2][0] == 'O' && b.getArr()[2][1] == 'O' && b.getArr()[2][2] == 'O' ||
		b.getArr()[0][0] == 'O' && b.getArr()[1][0] == 'O' && b.getArr()[2][0] == 'O' ||
		b.getArr()[0][1] == 'O' && b.getArr()[1][1] == 'O' && b.getArr()[2][1] == 'O' ||
		b.getArr()[0][2] == 'O' && b.getArr()[1][2] == 'O' && b.getArr()[2][2] == 'O' ||
		b.getArr()[0][0] == 'O' && b.getArr()[1][1] == 'O' && b.getArr()[2][2] == 'O' ||
		b.getArr()[0][2] == 'O' && b.getArr()[1][1] == 'O' && b.getArr()[2][0] == 'O'   )
		return 2;
	
	else
		return 0;
}