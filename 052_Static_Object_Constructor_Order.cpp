/*
◆───────────────────────────────◆
52. Static Object Constructor Order
◆───────────────────────────────◆

💡 Remember

A Static Object is created
only once.

Its Constructor runs
before main() starts.

Its Destructor runs
after main() ends.

🌐 Code

*/

#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout << "Constructor Called"
             << endl;
    }

    ~Demo()
    {
        cout << "Destructor Called"
             << endl;
    }
};

// Static Object
static Demo obj;

int main()
{
    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Inside main()

Destructor Called

*/