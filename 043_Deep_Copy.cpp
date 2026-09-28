/*
◆───────────────────────────────◆
43. Deep Copy
◆───────────────────────────────◆

💡 Remember

A Deep Copy creates a new
memory location and copies
the actual data.

Each Object owns its own
memory.

◆───────────────────────────────◆

⭐ Key Points

✔ Creates new memory.

✔ Copies actual data.

✔ Objects are independent.

✔ Safe for dynamic memory.

✔ Prevents Double Delete.

Student s2 = s1;   // Copy Constructor

Student s2(10);
s2 = s1;           // Copy Assignment Operator

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    int* age;

    Student(int value)
    {
        age = new int(value);
    }

    // Deep Copy Constructor
    Student(const Student& other)
    {
        age = new int(*other.age);
    }

    // Destructor
    ~Student()
    {
        delete age;
    }

    void Display()
    {
        cout << "Age : "
             << *age << endl;
    }
};

int main()
{
    Student s1(20);

    Student s2 = s1;

    *s2.age = 50;

    cout << "Object 1" << endl;
    s1.Display();

    cout << endl;

    cout << "Object 2" << endl;
    s2.Display();

    return 0;
}

/*

▶ Execution Output

Object 1
Age : 20

Object 2
Age : 50

*/