//
// Created by KIMSEYOUNG on 2023-05-02.
//
#include <iostream>

using namespace std;

// template


auto add(/*auto*/ int x, /*auto*/ int y) -> int /* << this is trailing */ // return type of function, enable auto, but arguments can't
{
    return x + y;
}

auto add(double x, double y) { // enable method overriding
    return x + y;
}

int main() {

    auto a = 123; // auto keyword, selected type automatically (type inference)
//    auto b; // if do not initialize, error.
    auto b = add(1, 2);

    return 0;
}