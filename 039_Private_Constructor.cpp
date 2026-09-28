/*
◆───────────────────────────────◆
39. Private Constructor
◆───────────────────────────────◆

💡 Remember

A Private Constructor
cannot be called from
outside the Class.

Only the Class itself
(or its Friends) can
use it.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
private:

    Student()
    {
        cout << "Private Constructor Called"
             << endl;
    }

public:

    static Student CreateObject()
    {
        Student temp;

        return temp;
    }

    void Display()
    {
        cout << "Object Created Successfully"
             << endl;
    }
};

int main()
{
    Student s1 = Student::CreateObject();

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Private Constructor Called

Object Created Successfully

*/