//
// Created by 김세영 on 2023/05/07.
//
#include <iostream>

using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(const int& id_input)
    :m_id(id_input)
    {
        cout << "Constructor " << m_id << endl;
    }

    /**
     * Destructor(~ Tilda)
     */
     ~Simple() // Destructor have not parameter
    {
         cout << "Destructor " << m_id << endl;
    }
};

class IntArray
{
private:
    int *m_arr = nullptr;
    int m_length = 0;

public:
    IntArray(const int& length_in)
    {
        m_length = length_in;
        m_arr = new int[m_length];
        cout << "Constructor" << endl;
    }

    int getLength(){return m_length;};

    ~IntArray()
    {
        if(m_arr != nullptr)
        {
            cout << "Destructor " << endl;
            delete[] m_arr;
        }
    }
};

int main()
{
    while(true)
    {
        IntArray my_int_arr(10000);
    }

    return 0;
}