#include <iostream>
using namespace std;

int* makeArray(int n)
{
	int* newArr = new int[n];

	for (int i = 0; i < n; i++)
	{
		if (i <= 1)
		{
			newArr[i] = 1;
		}

		else
		{
			newArr[i] = newArr[i - 1] + newArr[i - 2];

		}

	}

	return newArr;
}


void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';

	}
}

int main()
{
	int n = 8;

	printArr(makeArray(n), n);
}