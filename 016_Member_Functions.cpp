/*
◆───────────────────────────────◆
16. Member Functions
◆───────────────────────────────◆

💡 Remember

Functions declared inside a
Class are called Member
Functions.

They perform operations on
the Data Members of an Object.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Car
{
public:

    // Data Members
    string color = "Red";
    int speed = 120;

    // Member Function
    void ShowData()
    {
        cout << "Color : "
             << color << endl;

        cout << "Speed : "
             << speed << " km/h"
             << endl;
    }

    // Member Function
    void Start()
    {
        cout << "Car Started..."
             << endl;
    }

    // Member Function
    void Stop()
    {
        cout << "Car Stopped..."
             << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Car c1;

    // Calling Member Functions
    c1.ShowData();

    cout << endl;

    c1.Start();
    c1.Stop();

    return 0;
}

/*

▶ Execution Output

Color : Red
Speed : 120 km/h

Car Started...
Car Stopped...

*/