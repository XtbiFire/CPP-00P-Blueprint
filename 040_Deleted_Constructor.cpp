/*
◆───────────────────────────────◆
40. Deleted Constructor
◆───────────────────────────────◆

💡 Remember

A Deleted Constructor
cannot be used.

The Compiler generates
an error if someone tries
to call it.

It is declared using

= delete

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    // Deleted Default Constructor
    Student() = delete;

    // Parameterized Constructor
    Student(string studentName)
    {
        cout << "Student : "
             << studentName
             << endl;
    }
};

int main()
{
    // Student s1;   ❌ Error

    Student s2("Alex");

    return 0;
}

/*

▶ Execution Output

Student : Alex

*/