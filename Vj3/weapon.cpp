#include "weapon.h"
#include <iostream>
using namespace std;


Weapon::Weapon(int space)
{
	numOfBullets = 0;
	spaceforBullets = space;

}

void Weapon::bullets()
{
	cout << numOfBullets << endl;
}

void Weapon::space()
{
	cout << spaceforBullets << endl;
}

void Weapon::position()
{
	cout << place.getx() << place.gety() << place.getz() << endl;
}


void Weapon::shoot()
{
	double x, y, z;

	cout << "Unesite lokaciju mete: " << endl;
	cin >> x >> y >> z;

	if (numOfBullets == 0)
	{
		cout << "Nemate municije, potrebno reloadanje" << endl;
	}

	else {

		place.set(x, y, z);
		numOfBullets--;
		spaceforBullets++;
	}
}

void Weapon::reload()
{
	numOfBullets += spaceforBullets;
	spaceforBullets = 0;
}