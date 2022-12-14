#include <iostream>
#include "ptica.h"
#include "pauk.h"
#include "kukac.h"
#include "zivotinje.h"
#include "brojac.h"

using namespace std;

int main()
{
	CrnaUdovica a;
	Vrabac c;
	Mrav m;
	Lastavica l;

	Brojac b;

	b.newZiv(&a);
	b.newZiv(&c);
	b.newZiv(&m);
	b.newZiv(&l);

	b.ispis();

}