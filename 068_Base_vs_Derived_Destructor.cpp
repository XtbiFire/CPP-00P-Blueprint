/*
◆───────────────────────────────◆
68. Base vs Derived Destructor
◆───────────────────────────────◆

💡 Remember

When a Derived Object is
destroyed,

the Derived Destructor
runs first,

then the Base Destructor
runs.

Construction happens from

Base → Derived

Destruction happens from

Derived → Base

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

    // Base Destructor
    ~Animal()
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
    // Create Derived Object
    Dog d1;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Dog Constructor

Inside main()

Dog Destructor

Animal Destructor

*/