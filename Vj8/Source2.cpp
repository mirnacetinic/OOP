#include "Header2.h"


int main()
{
	Skup<int>a(2);

	a.addElement(3);
	a.addElement(1);
	a.addElement(1);
	a.addElement(0);

	a.rmvElement(1);
	a.printElements();

	a.findElement(1);
	a.findElement(0);



	return 0;
}