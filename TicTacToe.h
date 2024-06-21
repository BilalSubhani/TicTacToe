#pragma once
#include "Board.h"
#include <iostream>
using namespace std;

class TicTacToe
{
private:
	Board b;
public:
	void input(int, int, char);
	void print();
	bool checkError(int, int);
	int win();
};