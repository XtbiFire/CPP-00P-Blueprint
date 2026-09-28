/*
◆───────────────────────────────◆
53. Global Object Constructor Order
◆───────────────────────────────◆

💡 Remember

A Global Object is created
before main() starts.

Its Constructor runs
automatically before main().

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
        cout << "Global Object Constructor"
             << endl;
    }

    ~Demo()
    {
        cout << "Global Object Destructor"
             << endl;
    }
};

// Global Object
Demo obj;

int main()
{
    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Global Object Constructor

Inside main()

Global Object Destructor

*/