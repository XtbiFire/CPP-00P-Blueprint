/*
◆───────────────────────────────◆
27. Why Do We Need Constructors?
◆───────────────────────────────◆

💡 Remember

A Constructor automatically
initializes an Object when
it is created.

Without Constructors,
Objects may contain
uninitialized data.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Constructor
    Student()
    {
        name = "Alex";
        age = 20;
    }

    void ShowData()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

int main()
{
    Student s1;

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

*/