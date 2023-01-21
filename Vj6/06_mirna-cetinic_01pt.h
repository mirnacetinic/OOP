#include <string>
#include "zivotinje.h"

using namespace std;

class Ptica:public Zivotinje
{
public:
	 int getlegs()
	{
		 return 2;
	};
	 string getname()
	 {
		 return "ptica";
	 };

};

class Vrabac:public Ptica
{
public:
	string getname()
	{
		return "vrabac";
	}
};

class Lastavica:public Ptica
{
public:
	string getname()
	{
		return "lastavica";
	}

};

