#include "shootingrange.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	int space;
	int hit = 0;

	double x, y, z,xw,yw;
	double x1, y1;
	cout << "Broj n: " << endl;
	cin >> n;

	cout << "Velicina spreminka: " << endl;
	cin >> space;

	Weapon weapon(space);
	weapon.reload();

	Target A;
	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++)
	{
		x = -50 + (rand() % 100);
		y= -50 + (rand() % 100);
		z= - 50 + (rand() % 100);
		A.setDown(x, y, z);
		x1 = x + (rand() % 100);
		y1 = y+(rand() % 100);
		A.setUpper(x1, y1, z);

		weapon.shoot();

		xw = weapon.getx();
		yw = weapon.gety();

		if (xw >= x && xw <= x1 && yw >= y && yw <= y1)
		{
			A.shot();
			hit++;
		}

	}

	cout << "Pogodeno je: " << hit << ' ' << "meta" << endl;

}