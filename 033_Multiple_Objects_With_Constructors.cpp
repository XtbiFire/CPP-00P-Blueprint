/*
◆───────────────────────────────◆
33. Multiple Objects With Constructors
◆───────────────────────────────◆

💡 Remember

Every Object has its own
Constructor call.

Each Object stores its own
separate data.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Parameterized Constructor
    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;

        cout << "Constructor Called for "
             << name << endl;
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
    Student s1("Alex", 20);

    Student s2("Emma", 22);

    Student s3("John", 19);

    cout << endl;

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Constructor Called for Alex
Constructor Called for Emma
Constructor Called for John

Name : Alex
Age  : 20

Name : Emma
Age  : 22

Name : John
Age  : 19

*/