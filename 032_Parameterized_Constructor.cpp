/*
◆───────────────────────────────◆
32. Parameterized Constructor
◆───────────────────────────────◆

💡 Remember

A Parameterized Constructor
accepts one or more arguments.

It allows different Objects
to be initialized with
different values.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Parameterized Constructor
    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    void Display()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;

        cout << endl;
    }
};

int main()
{
    Student s1("Alex", 20);

    Student s2("Emma", 22);

    s1.Display();

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

Name : Emma
Age  : 22

*/