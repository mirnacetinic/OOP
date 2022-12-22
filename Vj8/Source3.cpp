#include "Header3.h"

using namespace std;

int main()
{
	int arr[] = { 6,8,3,1,2 };
	sort(arr,5);
	char arrc[] = { 'B','a','d','E','g','Z','w','P' };
	sort(arrc, 7);

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << arrc[i] << endl;
	}
}


