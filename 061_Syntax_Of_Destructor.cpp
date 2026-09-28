/*
◆───────────────────────────────◆
61. Syntax Of Destructor
◆───────────────────────────────◆

💡 Remember

A Destructor is a special
Member Function.

Its name is the same as
the Class name,

but it starts with (~).

A Destructor

• Has NO return type.
• Takes NO parameters.
• Cannot be overloaded.
• Runs automatically.

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
    Student s1;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Destructor Called

*/