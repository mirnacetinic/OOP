#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ' << endl;

	}
}

int* inputArr(int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Unesi element niza: " << endl;
		cin >> arr[i];
	}

	return arr;
}

int*removeDuplicates(int arr[], int &size)
{
	int* newArr = new int[size];
	newArr[0] = arr[0];
	int brojac = 0;
	int j = 1;

	for (int i = 1; i < size; i++)
	{
		for (int n = 0; n < j; n++)
		{
			if (arr[i] == newArr[n])
			{
				brojac++;
			}
		}

		if (brojac == 0)
		{
			newArr[j] = arr[i];
			brojac = 0;
			j++;
		}

		else
		{
			brojac = 0;
		}
	}

	size = j;
	return newArr;


}


int main()
{
	int size;

	cout << "Unesite broj elemenata niza: " << endl;
	cin >> size;

	int *arr= inputArr(size);
	cout << "Uneseni niz : " << endl;

	printArr(arr, size);


	cout << " Nakon uklanjanja duplikata : " << endl;

	printArr(removeDuplicates(arr, size), size);

}