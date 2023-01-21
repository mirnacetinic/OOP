#include "target.h"
#include <iostream>

using namespace std;

Target::Target()
{
	double x, y, z;
	cout << "Unesite prvu koordinatu mete: " << endl;
	cin >> x >> y >> z;
	downLeft.set(x, y, z);
	cout << "Unesite drugu koordinatu mete: " << endl;
	cin >> x >> y >> z;
	upperRight.set(x, y, z);

	condition = 0;
}

void Target::conditionOfTarget()
{
	if (condition == 0)
	{
		cout << "Not hit" << endl;
	}

	else
	{
		cout << "Hit" << endl;
	}
}

void Target::placement()
{
	cout << downLeft.getx() << downLeft.gety() << downLeft.getz() << upperRight.getx() << upperRight.gety() << upperRight.getz() << endl;
}
