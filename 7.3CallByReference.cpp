//
// Created by 김세영 on 2023/05/05.
//
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef int* pint;

void foo(int* &ptr)
{
    cout << ptr << " " << &ptr << endl;
}

void printElement(vector<int> &arr)
{

}

int main()
{
    int x = 5;
    pint ptr = &x;

    vector<int> arr{1,2,3,4,5};

    cout << ptr << " " << &ptr << endl;

    foo(ptr); // same pointer address;

    /**
     * Call by value >> copy a value, different memory
     *
     * Call by reference >> using address. (not copy)
     */

    return 0;
}