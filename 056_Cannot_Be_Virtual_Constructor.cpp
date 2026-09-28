/*
◆───────────────────────────────◆
56. Cannot Be Virtual Constructor
◆───────────────────────────────◆

💡 Remember

A Constructor
CANNOT be virtual.

Only Member Functions
can be virtual.

🌐 Code

*/

#include <iostream>
using namespace std;

class Animal
{
public:

    // ❌ Illegal
    // virtual Animal()
    // {
    // }

    Animal()
    {
        cout << "Animal Constructor"
             << endl;
    }

    virtual void Speak()
    {
        cout << "Animal Speaks"
             << endl;
    }
};

int main()
{
    Animal a;

    a.Speak();

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Animal Speaks

*/