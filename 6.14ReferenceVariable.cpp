//
// Created by 김세영 on 2023/05/06.
//
#include <iostream>

using namespace std;

int main()
{
    int value = 5;

    int *ptr = nullptr;
    ptr = &value; // pointer assignment

    int &ref = value; // it is look like use same memory // like alias

    ref = 10;

    cout << value << " " << ref << endl;

    cout << &ref << " " << &value << " " << ptr << " " << &ptr << endl;

    // ref address == value address

    // reference must be initialized
//    int &ref2; // error

    const int y = 8;
//    int &refy = y; // can't assign reference to const variables.
    const int &refy = y; // but const reference enable

    return 0;
}