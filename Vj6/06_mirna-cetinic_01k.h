#include <string>
#include "zivotinje.h"

using namespace std;

class Kukac:public Zivotinje{

public:

	int getlegs()
	{
		return 6;
	}

	string getname(){
	
		return "kukac";
	}
};

class Mrav :public Kukac
{
public:
	string getname()
	{
		return "mrav";
	}

};

class Osa :public Kukac
{
public:
	string getname()
	{
		return "osa";
	}

};
