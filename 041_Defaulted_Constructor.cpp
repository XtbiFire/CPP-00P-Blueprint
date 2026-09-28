/*
◆───────────────────────────────◆
41. Defaulted Constructor
◆───────────────────────────────◆

💡 Remember

A Defaulted Constructor
uses the Constructor
automatically generated
by the Compiler.

It is declared using

= default

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    // Defaulted Constructor
    Student() = default;

    string name = "Alex";
    int age = 20;

    void Display()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

int main()
{
    Student s1;

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

*/