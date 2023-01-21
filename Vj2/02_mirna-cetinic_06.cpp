#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void pigLatin(vector<string>& a)
{
	int index = 0;

	srand(time(NULL));
	int random = rand() % a.size();

	string str = a[random];

	char firstLetter = str[0];
	firstLetter=tolower(firstLetter);

	int start = 0;
	int steps = count(str.begin(), str.end(), ' ') + 1;


	for (int i = 0; i <steps; i++)
	{
		index = str.find(" ", index);

		if (i == steps-1)
		{
			index = str.size() - 1;
		}



		if (firstLetter != 'a' && firstLetter != 'e' && firstLetter != 'i' && firstLetter != 'o' && firstLetter != 'u')
		{
			string word;

			for (int j = start; j < index; j++)
			{
				if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j+1]==' ')
				{
					cout << word << endl;
					str.insert(index, word);
					str.erase(start, word.size());
					break;
				}

				else
				{
					word.push_back(tolower(str[j]));

				}


			}

			str.insert(index, "ay");
			index += 2;

		}


		else
		{
			str.insert(index, "hay");
			index += 3;
		}


		index++;
		start = index;
		firstLetter =str[start];

	}



	cout << str << endl;

}

int main()
{
	vector<string>a = { "What time is it?", "Who is there?", "What is your name?","Who is knocking?", "Why  are you disturbing me?","Once upon time."};

	pigLatin(a);
	
}
