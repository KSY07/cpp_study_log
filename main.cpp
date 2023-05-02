#include <iostream>

namespace b {
    int doSomething1(int a, int b)
    {
        return a+b;
    }
}

namespace a {
    int doSomething2(int a, int b)
    {
        return a*b;
    }
}

using namespace std;

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
