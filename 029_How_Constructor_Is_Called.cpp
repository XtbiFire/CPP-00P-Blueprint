/*
◆───────────────────────────────◆
29. How Constructor Is Called?
◆───────────────────────────────◆

💡 Remember

A Constructor is called
automatically whenever an
Object is created.

The programmer does not
call it manually.

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
};

int main()
{
    Student s1;

    Student s2;

    Student s3;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Constructor Called

Constructor Called

*/