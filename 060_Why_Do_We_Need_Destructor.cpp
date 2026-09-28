/*
◆───────────────────────────────◆
60. Why Do We Need Destructor?
◆───────────────────────────────◆

💡 Remember

A Destructor is used to
release resources before
an Object is destroyed.

Without a Destructor,

memory and other resources
may remain occupied.

This can cause Resource
Leaks.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
private:

    int* marks;

public:

    Student()
    {
        marks = new int(95);

        cout << "Memory Allocated"
             << endl;
    }

    ~Student()
    {
        delete marks;

        cout << "Memory Released"
             << endl;
    }
};

int main()
{
    Student s1;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Memory Allocated

Inside main()

Memory Released

*/