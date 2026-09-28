/*
◆───────────────────────────────◆
57. Virtual Call Inside Constructor
◆───────────────────────────────◆

💡 Remember

If a Virtual Function is
called inside a Constructor,

the Base Class version
is called.

The Derived version is
NOT called.

🌐 Code

*/

#include <iostream>
using namespace std;

class Animal
{
public:

    Animal()
    {
        Speak();
    }

    virtual void Speak()
    {
        cout << "Animal Speaks"
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

    void Speak() override
    {
        cout << "Dog Barks"
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

Animal Speaks

Dog Constructor

*/