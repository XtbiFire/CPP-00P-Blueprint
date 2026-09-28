/*
◆───────────────────────────────◆
13. Access Specifier : public
◆───────────────────────────────◆

💡 Remember

public is an Access Specifier.

Members declared as public
can be accessed from anywhere
inside the program.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    // Data Members
    string name = "Alex";
    int age = 20;

    // Member Function
    void ShowData()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Student s1;

    // Accessing Data Members
    cout << s1.name << endl;
    cout << s1.age << endl;

    cout << endl;

    // Calling Member Function
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