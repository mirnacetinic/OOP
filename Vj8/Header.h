#pragma once
#include <iostream>
using namespace std;

template <typename T>
T smaller(T a, T b)
{
    return  a > b ? b : a;

}

string smaller(string a,string b)
{
    if (a.size() > b.size())
    {
        return b;
    }

    return a;
}

int smaller(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}