//
// Created by 김세영 on 2023/05/05.
//
#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
    // x & y is parameter
    return x+y;
} // x and y are destroyed here

int main()
{
    int x = 1, y = 2;

    foo(6, 7); // 6, 7 : arguments(actual parameters)
    foo(x, y + 1);

    // NOTE: argument is real thing, parameters is abstract

    return 0;
}