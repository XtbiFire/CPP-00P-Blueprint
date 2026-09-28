/*
◆───────────────────────────────◆
69. Virtual Destructor
◆───────────────────────────────◆

💡 Remember

If a Base Class is used
through a Base Pointer,

its Destructor should
be Virtual.

Otherwise,

the Derived Destructor
may never execute.

This can cause
Resource Leaks.

🌐 Code

*/

#include <iostream>     // Input Output Library
using namespace std;

// Base Class
class Animal
{
public:

    // Base Constructor
    Animal()
    {
        cout << "Animal Constructor"
             << endl;
    }

    // Virtual Destructor
    virtual ~Animal()
    {
        cout << "Animal Destructor"
             << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:

    // Derived Constructor
    Dog()
    {
        cout << "Dog Constructor"
             << endl;
    }

    // Derived Destructor
    ~Dog()
    {
        cout << "Dog Destructor"
             << endl;
    }
};

// Main Function
int main()
{
    // Base Pointer
    Animal* ptr = new Dog();

    cout << "Object Is Working"
         << endl;

    // Destroy Object
    delete ptr;

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Dog Constructor

Object Is Working

Dog Destructor

Animal Destructor

*/