/*
◆───────────────────────────────◆
47. Rule Of Five
◆───────────────────────────────◆

💡 Remember

If a Class manages dynamic
memory and you manually
define one of these,

✔ Destructor
✔ Copy Constructor
✔ Copy Assignment Operator
✔ Move Constructor
✔ Move Assignment Operator

then you should usually
define all five.

This is called the
Rule Of Five.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
private:

    int* age;

public:

    // Constructor
    Student(int value)
    {
        age = new int(value);
    }

    // Copy Constructor
    Student(const Student& other)
    {
        age = new int(*other.age);
    }

    // Copy Assignment Operator
    Student& operator=(const Student& other)
    {
        if(this != &other)
        {
            delete age;
            age = new int(*other.age);
        }

        return *this;
    }

    // Move Constructor
    Student(Student&& other)
    {
        age = other.age;
        other.age = nullptr;
    }

    // Move Assignment Operator
    Student& operator=(Student&& other)
    {
        if(this != &other)
        {
            delete age;

            age = other.age;

            other.age = nullptr;
        }

        return *this;
    }

    // Destructor
    ~Student()
    {
        delete age;
    }

    void Display()
    {
        if(age)
            cout << "Age : " << *age << endl;
        else
            cout << "No Resource" << endl;
    }
};

int main()
{
    Student s1(20);

    Student s2 = std::move(s1);

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Age : 20

*/