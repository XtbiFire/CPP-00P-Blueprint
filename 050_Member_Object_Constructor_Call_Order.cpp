/*
◆───────────────────────────────◆
50. Member Object Constructor Call Order
◆───────────────────────────────◆

💡 Remember

When a Class contains
another Class as a Member,

the Member Object's
Constructor runs first.

Then,

the Outer Class
Constructor runs.

🌐 Code

*/

#include <iostream>
using namespace std;

class Engine
{
public:

    Engine()
    {
        cout << "Engine Constructor"
             << endl;
    }
};

class Car
{
private:

    Engine engine;

public:

    Car()
    {
        cout << "Car Constructor"
             << endl;
    }
};

int main()
{
    Car c1;

    return 0;
}

/*

▶ Execution Output

Engine Constructor
Car Constructor

*/