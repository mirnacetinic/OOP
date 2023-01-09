#include <iostream>
using namespace std;

template<typename T>

void sort(T arr[], int size)
{
    int i, j;
    T temp;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - 1; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<>

void sort(char arr[], int size)
{
    int i, j;
    char temp;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - 1; j++) {
            if (tolower(arr[j]) > tolower(arr[i])){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}