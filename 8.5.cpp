//
// Created by 김세영 on 2023/05/07.
//
#include <iostream>

using namespace std;

class Student
{
private:
    int     m_id;
    string  m_name;

public:
    Student(const int& m_id, const string& m_name)
    : m_id(m_id), m_name(m_name)
    {}

    Student(const string& name_in)
            : Student(0, name_in)
    {}

    void print()
    {
        cout << m_id << " " << m_name << endl;
    }

};

int main()
{

    return 0;
}