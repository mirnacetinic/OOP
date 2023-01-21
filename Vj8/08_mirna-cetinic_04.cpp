#include "Header4.h"

int main()
{
	Point<int>a(2, 3), b(3, 4);
	cout << "Udaljenost tocaka" << a << "i" << b << "je " << a - b << endl;
	Point<float>a1(2.5,3.5), b1(3.5,4.5);
	cout << "Udaljenost tocaka" << a1 << "i" << b1 << "je " << a1 - b1 << endl;

}
