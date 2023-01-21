#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void printt(vector<int> v)
{
	for (int i=0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}

void printif(vector<int>v, int odd)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (odd % 2 == 0)
		{
			if (v[i] % 2 == 0)
			{
				cout << v[i] << endl;
			}
		}

		if (v[i] % 2 != 0)
		{
			cout << v[i] << endl;
		}
	}
}

bool nepar(int a)
{
	if (a % 2 != 0)
	{
		return true;
	}

	return false;
}

bool na2(int a)
{
	while (a > 1)
	{
		if (a % 2 == 0)
		{
			a /= 2;
		}
		break;
	}

	if (a == 1)
	{
		return true;
	}
	return false;

}

int main()
{
	int counterOdd;
	vector<int> v ={1,55,132,487,3,321};

	vector<int>::iterator it = find_if(v.begin(), v.end(), nepar);
	cout << "Prvi neparni: " << *it << endl;

	counterOdd = count_if(v.begin(), v.end(), nepar);
	cout << "Broj neparnih: " << counterOdd << endl;

	replace_if(v.begin(), v.end(), na2, 2);
	cout << "Nakon zamjene potencija: " << endl;
	printt(v);

	sort(v.begin(), v.end());

	cout << "Sortirani parni: " << endl;
	printif(v, 2);

	cout << "Sortirani neparni:" << endl;
	printif(v, 1);

	return 0;

}