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
		throw NotaNum();
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
		throw InvalidOperation();
	
	}
}

int rezultat(int a,int b,char c)
{
	if (b == 0 && c=='/')
	{
		throw divZero();
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

		catch(divZero j){
			string opis;
			opis=str + " "+ j.what();
			v.push_back(opis);

		}
		catch (NotaNum i) {
			string opis;
			opis = str + " " + i.what();
			v.push_back(opis);
			break;

		}
		catch (InvalidOperation k) {
			string opis;
			opis = str + " " + k.what();
			v.push_back(opis);

		}


	}

	for (auto i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}
}
