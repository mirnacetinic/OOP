#include "board.h"
#include <iostream>

using namespace std;

void Board::matrix()
{
	board = new char* [r];
	for (int i = 0; i < r; i++)
	{ 
		board[i] = new char[s];
	}
}

Board::Board()
{
	matrix();
	board[0][0] = 0;

}

Board::Board(const Board& b):r(b.r),s(b.s)
{
	matrix();
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < s; ++j) {
			board[i][j] = b.board[i][j];
		}
	}

}

Board::Board(int a, int b):r(a),s(b)
{
	matrix();

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (i == 0 or i == r - 1 or j == 0 or j == s - 1)
			{
				board[i][j] = 'O';
			}

			else
			{
				board[i][j] = ' ';
			}
		}
	}

}

Board::~Board()
{
	for (int i = 0; i < r; ++i) {
		delete[] board[i];
	}
	delete[] board;
}


void Board::display()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

}

void Board::draw_char(Point& p, char ch)
{
	board[int(p.x)][int(p.y)] = ch;
}

void Board::draw_up_line(Point& p, char ch)
{

	for(int i=1; i < int(p.x); i++)
	{
		board[i][int(p.y)] = ch;

	}
}

void Board::draw_line(Point& p, Point& d, char ch)
{
	int j = 1;
	int smaller, colSmaller, b, colBigger;

	if (p.x > d.x)
	{
		smaller = int(d.x);
		colSmaller = int(d.y);
		 b = int(p.x);
		 colBigger = int(p.y);
	}

	else if(p.x < d.x)
	{
		smaller = int(p.x);
		colSmaller = int(p.y);
		b = int(d.x);
		colBigger = int(d.y);

	}

	else
	{
		if(int(p.y) < int(d.y))
		{
			b = int(d.y);
			smaller= int(p.y);
		}

		else
		{
			smaller = int(d.y);
			b = int(p.y);
		}
	}




	for (smaller;smaller<b; smaller++)
	{
		if (int(p.x) == int(d.x))
		{
			board[int(d.x)][smaller] = ch;
		}

		else if (int(p.y) == int(d.y))
		{
			board[smaller][int(d.y)] = ch;
		}

		else if(colBigger>colSmaller)
		{
			board[smaller][colSmaller+j] = ch;
			j++;
		}
		else
		{
			board[smaller][colBigger+j] = ch;
			j++;
		}

	}

}
