/*
◆───────────────────────────────◆
35. Default Arguments In Constructor
◆───────────────────────────────◆

💡 Remember

A Constructor can have
Default Arguments.

If some arguments are not
provided, the default values
are automatically used.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Constructor with Default Arguments
    Student(string studentName = "Unknown",
            int studentAge = 0)
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

        cout << endl;
    }
};

int main()
{
    Student s1;

    Student s2("Alex");

    Student s3("Emma",22);

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Name : Unknown
Age  : 0

Name : Alex
Age  : 0

Name : Emma
Age  : 22

*/