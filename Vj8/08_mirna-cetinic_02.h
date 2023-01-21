#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Skup
{

public:
	Skup(T a)
	{
		arr = new T[a];
		size = a;
		elements = 0;
	}

	void addElement(T a)
	{
		if (elements<size)
		{
			arr[elements] = a;
			elements++;
		}

		else
		{
			T*arrN = new T[size * 2];

			for (int i = 0; i < elements; i++)
			{
				arrN[i] = arr[i];
			}
			arrN[elements] = a;
			size *= 2;
			elements++;
			delete[]arr;
			arr = arrN;
		}
	}

	void printElements()
	{
		for(int i = 0; i < elements; i++)
		{
			cout << arr[i] << endl;
		}
	}

	void findElement(T a)
	{
		int found = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == a)
			{
				found++;

			}
		}
		if (found == 0)
		{
			cout << "Element nije dio skupa" << endl;
		}
		else
		{
			cout << "Element je dio skupa" << endl;
		}
	}

	void rmvElement(T a)
	{
		T* newArr = new T[size];
		int j = 0;

		for (int i = 0; i < elements; i++)
		{
			if(arr[i]!=a)
			{
				newArr[j] = arr[i];
				j++;
			}
		}

		delete[]arr;
		arr = newArr;
		elements = j;

	}

private:
	T* arr;
	int size, elements;
};
