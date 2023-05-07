//
// Created by 김세영 on 2023/05/06.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object --> Capsule
// Friend : name, address, age, height, weight, ...


class Friend {

public: // Access Specifier(public, private, protected)
    string name;
    string address;
    int age;
    double height;
    double weight;

    void print() // function in struct unable to Clang, use in c++
    {
        cout << name << " " << address << " " << age << " " << height << " "
             << weight << endl;
    }
};

void print(const Friend &fr)
{
    cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " "
         << fr.weight << endl;
}

void print(const string &name, const string &address, const int &age,
           const double &height, const double &weight)
{
    cout << name << " " << address << " " << age << " " << height << " "
        << weight << endl;
}

int main()
{
    string name;
    string address;
    int age;
    double height;
    double weight;

    Friend jj; // Instanciation, instance
    jj.name = "Jack Jack";
    jj.age = 2;
    jj.address = "Uptown";
    jj.height = 180.0f;
    jj.weight = 80.0f;

//    print(jj.name, jj.address, jj.age, jj.height, jj.weight); // so many argument & initialize
//    print(jj); // struct arg
//    jj.print();   // function member of struct
//
//    vector<string> name_vec;
//    vector<string> addr_vec;
//    vector<int>    age_vec;
//    vector<double> height_vec;
//    vector<double> weight_vec;
//
//    print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

    return 0;
}