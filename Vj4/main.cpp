#include "board.h"
#include <iostream>

using namespace std;

int main()
{

	Board a(20,10);
	Point p1(2, 2), p2(8,7), p3(2,8), p4(16, 8);

	a.draw_line(p1, p2, '+');
	a.draw_line(p3, p4,'-');

	a.display();



}