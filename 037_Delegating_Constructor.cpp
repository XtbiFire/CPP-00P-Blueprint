/*
◆───────────────────────────────◆
37. Delegating Constructor
◆───────────────────────────────◆

💡 Remember

A Constructor can call
another Constructor of
the same Class.

This is called
Delegating Constructor.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Main Constructor
    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;

        cout << "Main Constructor"
             << endl;
    }

    // Delegating Constructor
    Student()
        : Student("Unknown",0)
    {
        cout << "Delegating Constructor"
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

    cout << endl;

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Main Constructor
Delegating Constructor

Name : Unknown
Age  : 0

*/