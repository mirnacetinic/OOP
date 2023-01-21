#include <iostream>
#include <math.h>
using namespace std;

namespace OOP {

	class Vec3
	{

	private:
		float i, j, k;

	public:

		Vec3();
		Vec3(float i, float j, float k);

		Vec3 operator+(const Vec3& b);
		Vec3 operator-(const Vec3& b);
		Vec3 operator*(float skalar);
		Vec3 operator/(float skalar);
		Vec3& operator=(const Vec3& a);

		Vec3& operator+=(const Vec3&b);
		Vec3& operator-=(const Vec3&b);

		Vec3& operator/=(float skalar);
		Vec3& operator*=(float skalar);

		friend int operator==(const Vec3& a, const Vec3& b);
		friend int operator!=(const Vec3& a, const Vec3& b);
		float& operator[](char member);

		void normal();


		friend ostream& operator<<(ostream& output, Vec3& a) {

			output << "Vektor: " << a.i << a.j << a.k << endl;
			return output;
		}

		friend istream& operator>>(istream& input, Vec3& a) {

			cout << "Unesite i,j,k od vektora: " << endl;
			input >> a.i >> a.j >> a.k;
			return input;
		}
	};
}

