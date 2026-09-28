/*
◆───────────────────────────────◆
34. Constructor Overloading
◆───────────────────────────────◆

💡 Remember

A Class can have multiple
Constructors.

Each Constructor must have
a different parameter list.

This is called
Constructor Overloading.

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
        name = "Unknown";
        age = 0;
    }

    // Constructor 2
    Student(string studentName)
    {
        name = studentName;
        age = 0;
    }

    // Constructor 3
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
    Student s1;

    Student s2("Alex");

    Student s3("Emma",22);

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Name : Unknown
Age  : 0

Name : Alex
Age  : 0

Name : Emma
Age  : 22

*/