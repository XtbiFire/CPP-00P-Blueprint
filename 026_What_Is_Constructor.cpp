/*
◆───────────────────────────────◆
26. What Is Constructor?
◆───────────────────────────────◆

💡 Remember

A Constructor is a special
Member Function of a Class.

It is automatically called
when an Object is created.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    // Constructor
    Student()
    {
        cout << "Constructor Called"
             << endl;
    }
};

int main()
{
    Student s1;

    return 0;
}

/*

▶ Execution Output

Constructor Called

*/