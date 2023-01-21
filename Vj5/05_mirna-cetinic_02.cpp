#include "vec3.h"
#include <iostream>

using namespace std;

int main()
{
	using namespace OOP;

	Vec3 a, b, c, d, e;

	cin >> a;
	cin >> b;

	cout << a;

	d=a + b;

	cout << d;

	d=d*3;

	cout << d;

	 e=a - b;
	 cout << e;
	 e=e/3;

	 cout << e;

	 int ja = a['j'];
	 cout << ja << endl;

	 cout << a;
	 a.normal();
	 cout << a;

	 e += d;
	 cout << e;

	 e -= d;
	 cout << e;

	 cout <<(a == b);
	 cout << (a != b);




}
