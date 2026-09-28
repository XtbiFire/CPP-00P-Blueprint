/*
◆───────────────────────────────◆
17. Object Creation
◆───────────────────────────────◆

💡 Remember

An Object is a real instance
of a Class.

A Class is only a Blueprint.

Memory is allocated only
when an Object is created.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    // Data Members
    string name;
    int age;

    // Member Function
    void ShowData()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

// Main Function
int main()
{
    // Object 1
    Student s1;

    s1.name = "Alex";
    s1.age = 20;

    // Object 2
    Student s2;

    s2.name = "John";
    s2.age = 22;

    cout << "Student 1" << endl;
    s1.ShowData();

    cout << endl;

    cout << "Student 2" << endl;
    s2.ShowData();

    return 0;
}

/*

▶ Execution Output

Student 1
Name : Alex
Age  : 20

Student 2
Name : John
Age  : 22

*/