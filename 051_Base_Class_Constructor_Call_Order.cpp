/*
◆───────────────────────────────◆
51. Base Class Constructor Call Order
◆───────────────────────────────◆

💡 Remember

When a Derived Class Object
is created,

the Base Class Constructor
always runs first.

After that,

the Derived Class
Constructor runs.

🌐 Code

*/

#include <iostream>
using namespace std;

class Animal
{
public:

    Animal()
    {
        cout << "Animal Constructor"
             << endl;
    }
};

class Dog : public Animal
{
public:

    Dog()
    {
        cout << "Dog Constructor"
             << endl;
    }
};

int main()
{
    Dog d1;

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Dog Constructor

*/