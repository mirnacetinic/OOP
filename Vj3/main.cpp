#include "point.h"
#include <iostream>
using namespace std;

int main() {
	Point first;
	Point second;
	Point third;


	cout << third.getx() << ' ' << third.gety() << ' ' << third.getz() << ' ' << endl;

	third.randomSet();

	cout << third.getx() << ' ' << third.gety() << ' ' << third.getz() << ' ' << endl;

	first.set(1,2,3);
	second.set(4,5,6);

	cout << Point::distance2D(first,second) << endl;
	cout << Point::distance3D(first,second) << endl;


}