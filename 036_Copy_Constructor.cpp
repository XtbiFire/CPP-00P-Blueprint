/*
◆───────────────────────────────◆
36. Copy Constructor
◆───────────────────────────────◆

💡 Remember

A Copy Constructor creates
a new Object by copying an
existing Object.

It copies the data from one
Object into another Object.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    // Copy Constructor
    Student(const Student& other)
    {
        name = other.name;
        age = other.age;

        cout << "Copy Constructor Called"
             << endl;
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

    Student s2 = s1;

    s1.Display();

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Copy Constructor Called

Name : Alex
Age  : 20

Name : Alex
Age  : 20

*/