/*
◆───────────────────────────────◆
62. How Destructor Is Called?
◆───────────────────────────────◆

💡 Remember

A Destructor is called
automatically when an
Object is destroyed.

It is NEVER called
automatically while the
Object is still alive.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Constructor Called"
             << endl;
    }

    ~Student()
    {
        cout << "Destructor Called"
             << endl;
    }
};

int main()
{
    cout << "Program Starts"
         << endl;

    {
        Student s1;

        cout << "Inside Block"
             << endl;
    }

    cout << "Outside Block"
         << endl;

    return 0;
}

/*

▶ Execution Output

Program Starts

Constructor Called

Inside Block

Destructor Called

Outside Block

*/