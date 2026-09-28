/*
◆───────────────────────────────◆
18. Object Memory
◆───────────────────────────────◆

💡 Remember

A Class does not allocate memory.

Memory is allocated only when
an Object is created.

Every Object gets its own
separate memory.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    string name;
    int age;
};

// Main Function
int main()
{
    Student s1;
    Student s2;

    s1.name = "Alex";
    s1.age = 20;

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