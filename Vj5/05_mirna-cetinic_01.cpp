#include "vec3.h"
#include <iostream>
#include <math.h>

using namespace std;

namespace OOP{

	Vec3::Vec3()
	{
		this->i= 0;
		this->j =0;
		this->k= 0;
	}

	Vec3::Vec3(float i1, float j1, float k1)
	{
		this->i = i1;
		this->j = j1;
		this->k = k1;
	}

	Vec3 Vec3 :: operator+(const Vec3& b)
	{
		Vec3 sum;
		sum.i = this->i + b.i;
		sum.j = this->j + b.j;
		sum.k = this->k + b.k;

		return sum;
	};

	Vec3 Vec3 :: operator-(const Vec3& b)
	{
		Vec3 sup;
		sup.i = this->i - b.i;
		sup.j = this->j - b.j;
		sup.k = this->k - b.k;

		return sup;
	}

	Vec3 Vec3::operator*(float skalar)
	{
		Vec3 ps;

		ps.i = skalar * this->i;
		ps.j = skalar * this->j;
		ps.k = skalar *this-> k;

		return ps;

	}

	Vec3 Vec3::operator/(float skalar)
	{
		Vec3 ds;

		ds.i =this->i/skalar;
		ds.j =this->j/skalar;
		ds.k =this->k/skalar;

		return ds;

	}

	Vec3& Vec3::operator=(const Vec3& a)
	{
		this->i = a.i;
		this->j = a.j;
		this->k = a.k;

		return *this;
	}

	Vec3& Vec3 :: operator+=(const Vec3& b)
	{
		this->i = this->i + b.i;
		this->j = this->j + b.j;
		this->k = this->k + b.k;

		return *this;

	}

	Vec3& Vec3 :: operator-=(const Vec3& b)
	{
		this->i = this->i - b.i;
		this->j = this->j - b.j;
		this->k = this->k - b.k;

		return *this;

	}

	Vec3& Vec3::operator*=(float skalar)
	{

		this->i = skalar * i;
		this->j = skalar * j;
		this->k = skalar * k;

		return *this;

	}

	Vec3& Vec3::operator/=(float skalar){
	
		this->i = i/skalar;
		this->j = j/skalar;
		this->k = k/skalar;

		return *this;

	}

	int operator==(const Vec3& a, const Vec3& b)
	{
		if (a.k == b.k && a.j == b.j && a.i == b.i)
		{
			return 1;
		}

		else
		{
			return 0;
		}
	}

	int operator!=(const Vec3& a, const Vec3& b){

			if (a.k != b.k && a.j != b.j && a.i != b.i)
			{
				return 1;
			}

			else
			{
				return 0;
			}
		}

	float& Vec3::operator[](char member)
	{
			if (member == 'i')
			{
				return this->i;
			}

			else if (member == 'j')
			{
				return this->j;
			}

			else
			{
				return this->k;
			}
		}

	void Vec3::normal()
	{

		float modul = sqrt((pow(this->i, 2)) + (pow(this->j,2)) + (pow(this->k, 2)));
		this->i /= modul;
		this->j /= modul;
		this->k /= modul;
	}

}
