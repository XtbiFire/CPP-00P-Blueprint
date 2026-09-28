/*
◆───────────────────────────────◆
48. Rule Of Zero
◆───────────────────────────────◆

💡 Remember

If a Class does not manage
resources directly,

it should not manually
write

✔ Destructor

✔ Copy Constructor

✔ Copy Assignment Operator

✔ Move Constructor

✔ Move Assignment Operator

Let the Compiler generate
them automatically.

This is called the
Rule Of Zero.

🌐 Code

*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:

    string name;
    int age;

    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    void Display()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

int main()
{
    Student s1("Alex",20);

    Student s2 = s1;

    s1.Display();

    cout << endl;

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

Name : Alex
Age  : 20

*/