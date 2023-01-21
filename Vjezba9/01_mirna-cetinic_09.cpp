#include <iostream>
#include<vector>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <exception>
#include <iterator>

using namespace std;

void print(vector<int> vec)
{
	int i = 0;
	for (i; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}

bool lessThan300(int a)
{
	if (a < 300)
	{
		return true;
	}
	return false;
}

vector<int> funk(string fileName)
{
	int counter = 0;
	ifstream file(fileName);
	vector <int> vec;
	istream_iterator<int>s(file);
	istream_iterator<int>e;

	copy(s, e, back_inserter(vec));

	if (!file.is_open())
	{
		throw runtime_error("Ne postoji datoteka");
	}

	else {

		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] > 500)
			{
				counter++;
			}
		}

		cout << "Vektor: " << endl;
		print(vec);

		cout << "Brojevi veci od 500: " << counter << endl;

		cout << "min: " << *min_element(vec.begin(), vec.end()) << endl;
		cout << "max: " << *max_element(vec.begin(), vec.end()) << endl;

		vec.erase(remove_if(vec.begin(), vec.end(), lessThan300),vec.end());

		cout << "Nakon uklanjanja brojeva manjih od 300:  " << endl;
		print(vec);

		sort(vec.begin(), vec.end(), greater<int>());
		cout << "Sortiran ostatak: " << endl;
		print(vec);

		return vec;
	}
}

int main()
{
	try {
		funk("brojevi.txt");
	}
	catch (exception& exception) {
		cout << exception.what() << endl;
	}
}
