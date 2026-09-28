/*
◆───────────────────────────────◆
59. What Is Destructor?
◆───────────────────────────────◆

💡 Remember

A Destructor is a special
Member Function that runs
automatically when an
Object is destroyed.

It is mainly used to
release resources like
memory, files, or network
connections.

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

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Inside main()

Destructor Called

*/