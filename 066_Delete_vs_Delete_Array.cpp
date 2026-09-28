/*
◆───────────────────────────────◆
66. delete vs delete[]
◆───────────────────────────────◆

💡 Remember

delete is used for a
single Dynamic Object.

delete[] is used for
an Array of Dynamic
Objects.

Using the wrong one
causes Undefined
Behavior.

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
    Student* arr = new Student[3];

    cout << "Array Created"
         << endl;

    delete[] arr;

    return 0;
}

/*

▶ Execution Output

Constructor Called
Constructor Called
Constructor Called

Array Created

Destructor Called
Destructor Called
Destructor Called

*/