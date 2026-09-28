/*
◆───────────────────────────────◆
42. Shallow Copy
◆───────────────────────────────◆

💡 Remember

A Shallow Copy copies the
memory addresses instead
of creating new memory.

As a result,

multiple Objects may
share the same resource.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    int* age;

    Student(int value)
    {
        age = new int(value);
    }

    // Shallow Copy
    Student(const Student& other)
    {
        age = other.age;
    }

    void Display()
    {
        cout << "Age : "
             << *age << endl;
    }
};

int main()
{
    Student s1(20);

    Student s2 = s1;

    *s2.age = 50;

    cout << "Object 1" << endl;
    s1.Display();

    cout << endl;

    cout << "Object 2" << endl;
    s2.Display();

    return 0;
}

/*

▶ Execution Output

Object 1
Age : 50

Object 2
Age : 50

*/