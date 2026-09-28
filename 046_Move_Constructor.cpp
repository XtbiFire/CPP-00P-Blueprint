/*
◆───────────────────────────────◆
46. Move Constructor
◆───────────────────────────────◆

💡 Remember

A Move Constructor
transfers ownership of
resources instead of
copying them.

It avoids unnecessary
copies and improves
performance.

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

    // Move Constructor
    Student(Student&& other)
    {
        age = other.age;

        other.age = nullptr;

        cout << "Move Constructor Called"
             << endl;
    }

    ~Student()
    {
        delete age;
    }

    void Display()
    {
        if(age != nullptr)
        {
            cout << "Age : "
                 << *age << endl;
        }
        else
        {
            cout << "No Resource"
                 << endl;
        }
    }
};

int main()
{
    Student s1(20);

    Student s2(std::move(s1));

    cout << "Object 1" << endl;
    s1.Display();

    cout << endl;

    cout << "Object 2" << endl;
    s2.Display();

    return 0;
}

/*

▶ Execution Output

Move Constructor Called

Object 1

No Resource

Object 2

Age : 20

*/