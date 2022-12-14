#include <string>
#include "zivotinje.h"

using namespace std;

class Pauk:public Zivotinje{

public:

	string getname()
	{
		return "pauk";
	}

	int getlegs()
	{
		return 8;
	}
};

class CrnaUdovica :public Pauk
{
public:
	string getname()
	{
		return "crna udovica";
	}

};

class Tarantula :public Pauk
{
public:
	string getname()
	{
		return "tarantula";
	}

};
