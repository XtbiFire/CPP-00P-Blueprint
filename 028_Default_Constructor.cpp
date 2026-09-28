/*
◆───────────────────────────────◆
28. Default Constructor
◆───────────────────────────────◆

💡 Remember

A Default Constructor is a
Constructor that takes
no arguments.

It is automatically called
when an Object is created
without passing any values.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Default Constructor
    Student()
    {
        name = "Alex";
        age = 20;
    }

    void ShowData()
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

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

*/