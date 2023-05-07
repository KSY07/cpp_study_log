//
// Created by 김세영 on 2023/05/06.
//
#include <iostream>

using namespace std;

class Date // basically private
{
    int m_month;
    int m_day;
    int m_year;

public:

    Date()
    {

    }

    Date(const int& m_month, const int& m_day, const int& m_year)
    {
        this->m_month = m_month;
        this->m_day = m_day;
        this->m_year = m_year;
    }

    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    void setMonth(const int& month_input)
    {
        m_month = month_input;
    }

    void copyFrom(const Date& fromDate) // same class but different instance can access private member
    {
        m_month = fromDate.m_month;
        m_day = fromDate.m_day;
        m_year = fromDate.m_year;
    }

    const int& getDay()
    {  // getter usually return const reference
        return m_day;
    }

    //setDay, setYear ...
};


int main()
{
    Date today(5, 6, 2023);
    today.setDate(5,6,2023);

    cout << today.getDay() << endl;

    Date copy(1,1,2023);
    copy.copyFrom(today); // same class but different instance can access private member


    return 0;
}