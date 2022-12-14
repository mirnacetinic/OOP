#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "iznimka.h"
#include <ctime>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int unos()
{
	int a;
	cout << "Unesite broj: " << endl;
	cin >> a;

	if (cin.fail() || isdigit(a)==1)
	{
		throw Iznimka("not a number");
	}

	return a;
}

char operacija()
{
	char c;
	cout << "Unesite operator: " << endl;
    cin >> c;

	if ((c == '+') || (c == '-') || (c == '*') || (c == '/')) {

		return c;
	}

	else
	{
		throw Iznimka("invalid operation");
	
	}
}

int rezultat(int a,int b,char c)
{
	if (b == 0 && c=='/')
	{
		throw Iznimka("devide by zero");
	}

	else if (c == '+')
	{
		return a + b;
	}
	else if (c == '-')
	{
		return a - b;
	}

	else if(c == '*')
	{
		return a * b;
	}

	else {

		return a / b;
	}
}

int main()
{
	vector<string> v;


	while (1==1)
	{
		auto t = time(nullptr);
		auto tm = *localtime(&t);

		std::ostringstream oss;

		oss << put_time(&tm, "%d.%m.%Y. %H:%M:%S");
		auto str = oss.str();

		try {
			int x, y; 
			x=unos();
			y = unos();
			char c = operacija();
	

			cout << x << " " << c << " " << y << " = " << rezultat(x, y, c) << endl;
		}

		catch(Iznimka i){
			string opis;
			opis=str + " "+ i.what();
			v.push_back(opis);
			if (i.what() == "not a number")
			break;

		}


	}

	for (auto i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}
}
