#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

void sortVector(vector<string>&a)
{

	for (;;)
	{
		string str;

		cout << "Unesite string:" << endl << "(za prekid unosa, upisite stop)" << endl;
		getline(cin, str);

		if (str != "stop")
		{
			reverse(str.begin(), str.end());
			a.push_back(str);
		}

		else
		{
			break;
		}

	}

	sort(a.begin(), a.end());
}

void print(vector <string>& a) {
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ' << endl;
}


int main()
{
	vector<string>a;

	sortVector(a);
	print(a);

	return 0;
}
