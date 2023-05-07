//
// Created by 김세영 on 2023/05/05.
//
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int& getValue(int x)
{
    int value = x*2;
    return value;
}

std::tuple<int, double> getTuple()
{
    int a = 10;
    int d = 3.14;

    return make_tuple(a, d);
};

int& get(array<int, 100> &my_array, int idx)
{
    return my_array[idx];
}

struct S
{
    int a,b,c,d;
};

S getStruct()
{
    S my_s{1,2,3,4};

    return my_s;
}

int main() {

    int &value = getValue(5); // return reference
    int value2 = getValue(5); // return value(for reference)

    cout << value << endl;
    cout << value << endl;
    cout << value << endl;
    cout << value << endl;

    array<int, 100> my_array;
    my_array[30] = 10;

    get(my_array, 30) = 1024; // return reference = 1024; (pattern)

    cout << my_array[30] << endl;

    // return struct
    S my_s = getStruct();
    my_s.a = 1;

    tuple<int, double> my_tp = getTuple();
    cout << get<0>(my_tp) << endl; // a

    return 0;
}