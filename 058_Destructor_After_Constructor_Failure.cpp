/*
◆───────────────────────────────◆
58. Destructor After Constructor Failure
◆───────────────────────────────◆

💡 Remember

If a Constructor throws an
Exception,

the Object is NOT fully
created.

Therefore,

its Destructor is NOT
called.

However,

Constructors and
Destructors of already
constructed Member Objects
are executed correctly.

🌐 Code

*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Engine
{
public:

    Engine()
    {
        cout << "Engine Constructor"
             << endl;
    }

    ~Engine()
    {
        cout << "Engine Destructor"
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

        throw runtime_error(
            "Construction Failed");
    }

    ~Car()
    {
        cout << "Car Destructor"
             << endl;
    }
};

int main()
{
    try
    {
        Car c1;
    }
    catch(const exception& e)
    {
        cout << e.what()
             << endl;
    }

    return 0;
}

/*

▶ Execution Output

Engine Constructor

Car Constructor

Engine Destructor

Construction Failed

*/