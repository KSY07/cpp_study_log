//
// Created by KIMSEYOUNG on 2023-05-02.
//
#include <iostream>
#include <typeinfo>

int main() {

    using namespace std;

    /**
     * Type Conversion
     *
     * - Implicit Type Conversion (Coersion)
     * - Explicit Type Conversion (Casting)
     *
     */

    cout << typeid(4.0).name() << endl; // typeid return variable type

    // numeric conversion
    int i = 30000;
    char c = i;
    float f = 0.123456789;
    // Explicit Type Conversion >> static_cast<>
    cout << static_cast<int>(c) << endl; // but printed 48 not 30000

    cout << 5u - 10; // u >> this mean unsigned(literal)
    // print 4294967291 (overflow)

    //C style casting
    int q = (int) 4.0;

    // static_cast

    int z = static_cast<int>(4.0);

    return 0;
}