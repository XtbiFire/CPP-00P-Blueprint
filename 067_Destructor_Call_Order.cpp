/*
◆───────────────────────────────◆
67. Destructor Call Order
◆───────────────────────────────◆

💡 Remember

Objects are destroyed in the
reverse order of their creation.

This follows the

LIFO (Last In First Out)

rule.

🌐 Code

*/

#include <iostream>     // Input Output Library
using namespace std;

// Student Class
class Student
{
public:

    // Constructor
    Student()
    {
        cout << "Constructor Called"
             << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called"
             << endl;
    }
};

// Main Function
int main()
{
    // First Object
    Student s1;

    // Second Object
    Student s2;

    // Third Object
    Student s3;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called
Constructor Called
Constructor Called

Inside main()

Destructor Called
Destructor Called
Destructor Called

(Destructor Order)

s3

↓

s2

↓

s1

*/