#include <iostream>

namespace b {
    int doSomething(int a, int b)
    {
        return a+b;
    }
}

namespace a {
    int doSomething(int a, int b)
    {
        return a*b;
    }

    namespace a2 {
        int doSomething(int a, int b)
        {
            return a/b;
        }
    }
}

using namespace std;

int main()
{
    using namespace a::a2; // if using namespace (specific namespace), have not write namespace ::

    std::cout << "Hello, World!" << std::endl;
    std::cout << a::doSomething(1, 2) << endl;
    std::cout << b::doSomething(1, 2) << endl;
    std::cout << a::a2::doSomething(1,2) << endl;

    std::cout << doSomething(1, 2) << endl; // 1 / 2

    return 0;
}
