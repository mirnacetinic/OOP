#include "vector.h"
using namespace std;

void MyVector::vector_new(size_t sz)
{
    if (sz <= 0)
    {
        capacity = 1;
    }

    else {

        capacity = sz;
    }
    size = 0;
    arr = new int[capacity];


}
void MyVector::vector_delete()
{
    delete[] arr;
    size = 0;
    capacity = 0;

}
void MyVector::vector_push_back(int n)
{
    if (size < capacity)
    {
        arr[size] = n;
        size++;
    }

    else
    {
        capacity *= 2;
        int* newArr = new int[capacity];

        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }

        newArr[size] = n;
        size++;

        delete[] arr;

        arr = new int[capacity];

        for (int i = 0; i < size; i++)
        {
            arr[i] = newArr[i];
        }

        delete[] newArr;

    }

}
void MyVector::vector_pop_back()
{
    /* TODO */
}
int& MyVector::vector_front()
{
    return arr[0];
}
int& MyVector::vector_back()
{
    return arr[size - 1];
}
size_t MyVector::vector_size()
{
    return size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        cout << arr[i] << " ";
         cout << endl;
}