/*
◆───────────────────────────────◆
23. Access Specifier : protected
◆───────────────────────────────◆

💡 Remember

protected is an Access
Specifier.

It is similar to private,
but it is mainly used with
Inheritance.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
protected:

    int marks = 95;

public:

    void ShowMarks()
    {
        cout << "Marks : "
             << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.ShowMarks();

    // Wrong ❌
    // cout << s1.marks;

    return 0;
}

/*

▶ Execution Output

Marks : 95

*/