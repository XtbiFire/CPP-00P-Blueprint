/*
◆───────────────────────────────◆
64. Local Object Destructor
◆───────────────────────────────◆

💡 Remember

A Local Object is an
Object created inside a
Function or Block.

Its Destructor is called
automatically when the
Object goes out of Scope.

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

    cout << "Block Finished"
         << endl;

    return 0;
}

/*

▶ Execution Output

Program Starts

Constructor Called

Inside Block

Destructor Called

Block Finished

*/