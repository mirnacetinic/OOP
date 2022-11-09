#include <iostream>
#include <string>

using namespace std;

int punct(string str)
{

	for (int i=0; i < str.size(); i++)
	{
		if (ispunct(str[i]))
		{
			if (str[i + 1] != ' ')
			{
				str.insert(i + 1, " ");
			}

			if (str[i - 1] == ' ')
			{
				str.erase(str.begin() + (i-1));
			}
		}
	}

	cout << str << endl;

	return 0;

}

int main()
{
	string str;

	cout << "Unesite string: " << endl;
	getline(cin, str);

	punct(str);


}