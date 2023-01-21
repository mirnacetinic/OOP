#pragma once
#include "zivotinje.h"


class Brojac
{
public:
	int noge;

	void ispis()
	{
		cout << "ukupan broj nogu: " << noge << endl;
	}
	void newZiv(Zivotinje* zivotinja)
	{
		noge+= zivotinja->getlegs();
		cout << "dodan: " << zivotinja->getname() << endl;
	}

	Brojac()
	{
		noge = 0;
	}

};
