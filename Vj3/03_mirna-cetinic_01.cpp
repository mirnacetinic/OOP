#include <iostream>
#include <math.h>
#include "point.h"
using namespace std;

Point::Point(){
	set(0,0,0);
}


void Point::set(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}

void Point::randomSet()
{
	srand((unsigned)time(NULL));

	x = -50 + (rand()%100);
	y = -50 + (rand()%100);
	z = -50 + (rand()%100);
}

double Point::getx()
{
	return x;
}

double Point::gety()
{
	return y;
}

double Point::getz()
{
	return z;
}

double Point::distance2D(Point& first,Point& second)
{
	return(sqrt((pow((second.x - first.x),2) + pow((second.y - first.y),2))));
}

double Point::distance3D(Point& first,Point& second)
{
	return(sqrt((pow((second.x - first.x), 2) + pow((second.y - first.y), 2) + pow((second.z-first.z),2))));
}
