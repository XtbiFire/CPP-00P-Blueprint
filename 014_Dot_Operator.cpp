/*
◆───────────────────────────────◆
14. Dot (.) Operator
◆───────────────────────────────◆

💡 Remember

The Dot (.) Operator is used
to access the public Members
of an Object.

Without an Object,
the Dot Operator cannot be used.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    string name = "Alex";
    int age = 20;

    void ShowData()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Main Function
int main()
{
    Student s1;

    cout << s1.name << endl;
    cout << s1.age << endl;

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Alex
20

Name : Alex
Age  : 20

*/