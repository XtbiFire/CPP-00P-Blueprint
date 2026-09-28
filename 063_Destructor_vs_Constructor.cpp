/*
◆───────────────────────────────◆
63. Destructor vs Constructor
◆───────────────────────────────◆

💡 Remember

Constructor and Destructor
are special Member Functions.

Constructor creates an Object.

Destructor destroys an Object.

They always work together.

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

    cout << "Object Is Working"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Object Is Working

Destructor Called

*/