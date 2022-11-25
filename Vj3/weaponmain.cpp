#include "weapon.h"
#include <iostream>

using namespace std;

int main()
{
	int space;
	cout << "Unesite velicinu spremnika: " << endl;
	cin >> space;

	Weapon first(space);
	first.position();
	first.reload();


	for (int i=0;i<space+1;i++)
	{
		first.shoot();
		first.shoot();
		first.bullets();
		first.space();
	}


}