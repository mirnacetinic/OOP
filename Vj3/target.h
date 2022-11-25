
class Point {
private:
	double x, y, z;

public:

	Point()
	{
		set(0, 0, 0);
	};

	void set(double x1, double y1, double z1)
	{
		x = x1;
		y = y1;
		z = z1;
	};

	double getx()
	{
		return x;
	};
	double gety()
	{
		return y;
	};
	double getz()
	{
		return z;
	};

};

class Target
{
private:
	int condition;
	Point downLeft, upperRight;

public:

	Target();
	void conditionOfTarget();
	void placement();

};
