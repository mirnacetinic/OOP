#include <iostream>
using namespace std;

int& positive(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			return arr[i];
		}
	}
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
	int arr[] = { -1,-2,0,-5,1,2,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);


	int& ref = positive(arr, size);
	ref = 0;

	printArr(arr, size);

}
