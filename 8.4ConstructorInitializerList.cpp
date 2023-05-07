//
// Created by 김세영 on 2023/05/06.
//
#include <iostream>

using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int& m_b_in)
    {
        m_b = m_b_in;
    }
};


class Something
{
private:
    int     m_i;
    double  m_d;
    char    m_c;
    int     m_arr[5];
    B       m_b;

public:
    Something()
        : m_i(1), m_d(3.14), m_c('a'), m_arr{1,2,3,4,5}, m_b(m_i-1) // Initailize List (But Autocasting has restricted)
    {

    }

    void print()
    {
        cout << m_i << " " << m_d << " " << m_c << endl;
        for(int &ele : m_arr)
            cout << ele << " ";
        cout << endl;
    }
};

int main()
{
    Something something;
    something.print();

    return 0;
}