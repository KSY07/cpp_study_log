//
// Created by KIMSEYOUNG on 2023-05-02.
//
#include <iostream>

using namespace std;

int main()
{
    const char* my_strs = "Hello, World";
    const string my_hello = "Hello, World";

    /**
       C++ string type is a class.
       see std::string class

       typedef basic_string<char>    string;

       template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
        class basic_string;
     */

//    cout << "Your name? : ";
//    string name;
//    cin >> name;
//
//    cout << "Your age? : ";
//    string age;
//    cin >> age;
//
//    cout << name << " " << age << endl;

    /**
     * cin func blankspace is end
     */
     /**
      * string >> use getline(std::cin, (string variable));
      */
//      string name;
//      string age;
//     std::getline(std::cin, name); // read oneline (include blankspace)
//     std::getline(std::cin, age);
//
//     cout << name << " " << age << endl;

     /**
      * read string & integer same time
      */
     string name;
     int age;
//     cout << "Your name? : ";
//     std::getline(std::cin, name);
//     cout << "Your age? : ";
//     cin >> age;
//
//    cout << name << " " << age << endl;

    /**
     * Reverse name & age inputting
     */
//     cout << "Your age? : ";
//     cin >> age;
//     cout << "Your name? : ";
//     std::getline(cin, name);


     // clear buffered.

    cout << "Your age? : ";
    cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // this mean buffered ignore 32767 characters before faced \n
    // streamsize is buffered size
    cout << "Your name? : ";
    std::getline(cin, name);
    cout << name << " " << age << endl;

    return 0;
}