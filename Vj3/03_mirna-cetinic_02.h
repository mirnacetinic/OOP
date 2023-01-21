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
class Weapon{

private:

	int numOfBullets, spaceforBullets;
	Point place;

	class Point;


public:
	Weapon(int space);
	void bullets();
	void space();
	void position();
	void shoot();
	void reload();
};
