class Point {
private:
	double x, y, z;

public:
	Point();

	void set(double x, double y, double z);
	void randomSet();
	double getx();
	double gety();
	double getz();
	static double distance2D(Point& first,Point& second);
	static double distance3D(Point& first,Point& second);

};
