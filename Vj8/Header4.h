#include <math.h>
#include <iostream>

using namespace std;

template<typename T> class Point
{
private:
	T x, y;

public:
	Point(T x1,T x2)
	{
		x = x1;
		y = x2;
	}

	float operator-(Point& b)
	{
		float distance;
		distance = sqrt(pow((this->x - b.x),2) + pow((this->y - b.y),2));
		return distance;
	}

	friend ostream& operator<<(ostream& output, Point& a) {

		output << " (" << a.x << "," << a.y << ") ";
		return output;
	}


};