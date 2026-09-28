/*
◆───────────────────────────────◆
38. Explicit Constructor
◆───────────────────────────────◆

💡 Remember

An Explicit Constructor
prevents automatic
implicit conversions.

It forces the programmer
to create Objects
explicitly.

◆───────────────────────────────◆

⭐ Key Points

✔ Uses the explicit keyword.

✔ Stops implicit conversion.

✔ Makes code safer.

✔ Prevents accidental
  Object creation.

✔ Commonly used with
  single-parameter
  Constructors.

Student s = 20;   // Allowed?
Student s(20);    // Allowed?
Student s{20};    // Allowed?
◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    int age;

    // Explicit Constructor
    explicit Student(int studentAge)
    {
        age = studentAge;
    }

    void Display()
    {
        cout << "Age : "
             << age << endl;
    }
};

int main()
{
    Student s1(20);

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Age : 20

*/