#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector <int>& a) {
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';
}

int main()
{
	vector<int> c = { 1,6,8,3,4,10,2 };

	sort(c.begin(), c.end());

	vector<int> ::iterator begining = c.begin();

	c.insert(begining, 0);

	int sum = 0;

	for (int i = 0; i < c.size(); i++)
	{
		sum += c[i];
	}

	c.push_back(sum);


	print(c);

}