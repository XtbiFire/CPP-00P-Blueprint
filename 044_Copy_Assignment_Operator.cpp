/*
◆───────────────────────────────◆
44. Copy Assignment Operator
◆───────────────────────────────◆

💡 Remember

A Copy Assignment Operator
copies data from one
existing Object to another
existing Object.

It is different from a
Copy Constructor.

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

    // Copy Assignment Operator
    Student& operator=(const Student& other)
    {
        name = other.name;
        age = other.age;

        cout << "Copy Assignment Operator Called"
             << endl;

        return *this;
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
    Student s1("Alex",20);

    Student s2("Emma",25);

    s2 = s1;

    s1.Display();

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Copy Assignment Operator Called

Name : Alex
Age  : 20

Name : Alex
Age  : 20

*/