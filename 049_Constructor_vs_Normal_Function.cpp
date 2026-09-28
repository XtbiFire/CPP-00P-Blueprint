/*
◆───────────────────────────────◆
49. Constructor vs Normal Function
◆───────────────────────────────◆

💡 Remember

A Constructor is a special
Member Function that
automatically runs when
an Object is created.

A Normal Function runs
only when we call it.

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

    void Display()
    {
        cout << "Display Function Called"
             << endl;
    }
};

int main()
{
    Student s1;

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Constructor Called

Display Function Called

*/