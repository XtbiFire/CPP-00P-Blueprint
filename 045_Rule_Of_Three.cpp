/*
◆───────────────────────────────◆
45. Rule Of Three
◆───────────────────────────────◆

💡 Remember

If a Class manages dynamic
memory and you write any
one of these manually,

✔ Destructor

✔ Copy Constructor

✔ Copy Assignment Operator

then you should usually
write all three.

This is called the
Rule Of Three.

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
        if (this != &other)
        {
            delete age;

            age = new int(*other.age);
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
        cout << "Age : "
             << *age << endl;
    }
};

int main()
{
    Student s1(20);

    Student s2 = s1;

    Student s3(0);

    s3 = s1;

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Age : 20

Age : 20

Age : 20

*/