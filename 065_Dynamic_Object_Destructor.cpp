/*
◆───────────────────────────────◆
65. Dynamic Object Destructor
◆───────────────────────────────◆

💡 Remember

A Dynamic Object is created
using the new keyword.

Its Destructor is NOT called
automatically.

The Destructor runs only
when delete is used.

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
    Student* ptr = new Student();

    cout << "Object Is Working"
         << endl;

    delete ptr;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Object Is Working

Destructor Called

*/