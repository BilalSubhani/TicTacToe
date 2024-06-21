#pragma once

class Board
{
private:
	char** arr;
public:
	Board();
	void setArray(int, int, char);
	char** getArr();
	void display();
};