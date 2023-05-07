//
// Created by 김세영 on 2023/05/05.
//
#include <iostream>

using namespace std;

void foo(int *ptr)
{
    cout << *ptr << " " << ptr << " " << &ptr << endl; // different &ptr in main function.
    int x;
    *ptr = 3; // if argument has (const int *ptr), can't dereferencing
    ptr = &x; // if argument has (int const *ptr), can't reassign pointer
}

int main()
{

    int value = 5;

    cout << value << " " << &value << endl;

    int *ptr = &value;

    cout << &ptr << endl; // address of pointer

    foo(ptr);
    foo(&value);


    return 0;
}