#include<iostream>
#include<vector>
using namespace std;

void print(vector <int>& a) {
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ' << endl;
}

void inputVector(vector <int>& a, int start, int end)
{
	int element;
	int i = 0;

	for (;;)
	{
		cout << "Unesite element vekotra: " << endl;
		cin >> element;

		if (element<start or element>end)
		{
			cout << "Element je izvan intervala " << endl;
			break;
		}

		else
		{
			a.push_back(element);
			i++;
		}

	}

}

void inputVectorElements(vector <int>& a, int elements)
{
	for (int i = 0; i < elements; i++)
	{
		cout << "Unesite element vektora: " << endl;
		cin >> a[i];
	}

}

