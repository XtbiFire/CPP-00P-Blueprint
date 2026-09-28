/*
◆───────────────────────────────◆
70. Pure Virtual Destructor
◆───────────────────────────────◆

💡 Remember

A Destructor can be
Pure Virtual.

But,

it MUST always have a
definition.

Otherwise,

the program will produce
a Linker Error.

🌐 Code

*/

#include <iostream>     // Input Output Library
using namespace std;

// Base Class
class Animal
{
public:

    // Pure Virtual Destructor
    virtual ~Animal() = 0;
};

// Definition of Pure Virtual Destructor
Animal::~Animal()
{
    cout << "Animal Destructor"
         << endl;
}

// Derived Class
class Dog : public Animal
{
public:

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

    // Destroy Object
    delete ptr;

    return 0;
}

/*

▶ Execution Output

Dog Destructor

Animal Destructor

*/