/*
◆───────────────────────────────◆
31. Default Access Specifier
Class vs Struct
◆───────────────────────────────◆

💡 Remember

Both class and struct can
contain

✔ Data Members

✔ Member Functions

✔ Constructors

✔ Destructors

The biggest difference is
their default Access Specifier.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class
class Student
{
    int age = 20;

public:

    void ShowAge()
    {
        cout << "Age : "
             << age << endl;
    }
};

// Struct
struct Player
{
    string name = "Alex";
};

int main()
{
    Student s1;

    s1.ShowAge();

    Player p1;

    cout << "Name : "
         << p1.name << endl;

    return 0;
}

/*

▶ Execution Output

Age : 20

Name : Alex

*/