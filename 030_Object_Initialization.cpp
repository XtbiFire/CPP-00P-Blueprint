/*
◆───────────────────────────────◆
30. Object Initialization
◆───────────────────────────────◆

💡 Remember

Object Initialization means
giving initial values to an
Object when it is created.

A Constructor is commonly
used to initialize an Object.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    Student()
    {
        name = "Alex";
        age = 20;

        cout << "Constructor Executed"
             << endl;
    }

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

Constructor Executed

Name : Alex
Age  : 20

*/