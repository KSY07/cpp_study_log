//
// Created by 김세영 on 2023/05/07.
//
/**
* this pointer & Chaining Member Functions
*/
#include <iostream>

using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(int id)
    {
        this->setID(id);

        cout << this << endl; // this keyword is self-pointer
    }

    void setID(int id) { m_id = id;};
    int getId() { return m_id; };
};

class Chain
{
private:
    int m_value;

public:
    Chain(int init_value)
    :m_value(init_value)
    {}

    Chain& add(int value)
    {
        m_value += value;
        return *this;
    }

    Chain& substract(int value)
    {
        m_value -= value;
        return *this;
    }

    Chain& mult(int value)
    {
        m_value *= value;
        return *this;
    }

    Chain& print()
    {
        cout << m_value << endl;
        return *this;
    }
};

int main()
{
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);

    cout << &s1 << " " << &s2 << endl;

    Chain ch(1);
    ch.add(10);
    ch.substract(2);
    ch.mult(2);
    ch.add(10).mult(2).substract(10); // Chaining Member Functions( return reference of class )

    ch.print();

    return 0;
}