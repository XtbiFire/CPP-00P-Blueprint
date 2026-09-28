/*
◆───────────────────────────────◆
54. Temporary Objects And Constructors
◆───────────────────────────────◆

💡 Remember

A Temporary Object is
created automatically
by the Compiler.

It exists only for a
short time.

After its work is
finished,

it is destroyed
automatically.

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
    Student();

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Destructor Called

Inside main()

*/