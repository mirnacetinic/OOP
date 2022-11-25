#include <iostream>
using namespace std;

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
	Target()
	{
		condition = 0;
	}

	void shot()
	{
		condition = 1;
	}

	int conditionOfT()
	{
		return condition;

	}

	void setUpper(double x,double y,double z)
	{
		upperRight.set(x, y, z);

	}

	void setDown(double x, double y, double z)
	{
		downLeft.set(x, y, z);
	}

	void position()
	{
		cout << upperRight.getx() << ' ' << upperRight.gety() << ' ' << upperRight.getz() << endl;
		cout << downLeft.getx() << ' ' << downLeft.gety() << ' ' << downLeft.getz() << endl;
	}

};

class Weapon {

private:

	int numOfBullets, spaceforBullets;
	Point place;


public:
	Weapon(int space)
	{
		numOfBullets = 0;
		spaceforBullets = space;
	}

	void shoot()
	{
		double x, y, z;
		if (numOfBullets == 0)
		{
			cout << "Nemate muncije" << endl;
		}
		else
		{
			cout << "Unesite lokaciju oruzja: " << endl;
			cin >> x >> y >> z;
			place.set(x, y, z);
			numOfBullets--;
			spaceforBullets++;
		}	
	}

	void reload()
	{
		numOfBullets += spaceforBullets;
		spaceforBullets = 0;
	}

	double getx()
	{
		return place.getx();
	}

	double gety()
	{
		return place.gety();
	}

	double getz()
	{
		return place.getz();
	}
};
