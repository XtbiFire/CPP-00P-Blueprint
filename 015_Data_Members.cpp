/*
◆───────────────────────────────◆
15. Data Members
◆───────────────────────────────◆

💡 Remember

Variables declared inside a
Class are called Data Members.

They store information about
an Object.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    // Data Members
    string name;
    int age;
};

// Main Function
int main()
{
    // Object 1
    Student s1;

    s1.name = "Alex";
    s1.age = 20;

    // Object 2
    Student s2;

    s2.name = "John";
    s2.age = 22;

    cout << "Student 1" << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Age  : " << s1.age << endl;

    cout << endl;

    cout << "Student 2" << endl;
    cout << "Name : " << s2.name << endl;
    cout << "Age  : " << s2.age << endl;

    return 0;
}

/*

▶ Execution Output

Student 1
Name : Alex
Age  : 20

Student 2
Name : John
Age  : 22

*/