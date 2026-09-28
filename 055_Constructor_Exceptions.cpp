/*
◆───────────────────────────────◆
55. Constructor Exceptions
◆───────────────────────────────◆

💡 Remember

A Constructor can throw
an Exception.

If an Exception is thrown,

the Object is NOT created.

Its Destructor is also
NOT called because the
Object was never fully
constructed.

🌐 Code

*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Student
{
public:

    Student(int age)
    {
        if(age < 0)
        {
            throw invalid_argument("Age cannot be negative.");
        }

        cout << "Constructor Successful"
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
    try
    {
        Student s1(-5);
    }
    catch(const exception& e)
    {
        cout << "Exception : "
             << e.what()
             << endl;
    }

    return 0;
}

/*

▶ Execution Output

Exception : Age cannot be negative.

*/