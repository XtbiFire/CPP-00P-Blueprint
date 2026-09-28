/*
◆───────────────────────────────◆
12. Class Body
◆───────────────────────────────◆

💡 Remember

The Class Body is the area
inside the curly braces { }.

It contains the complete
definition of a Class.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Player
{
public:

    // Data Members
    string name = "Alex";
    int health = 100;

    // Member Function
    void ShowData()
    {
        cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
    }

};

// Main Function
int main()
{
    // Object Creation
    Player p1;

    // Calling Member Function
    p1.ShowData();

    return 0;
}

/*

▶ Execution Output

Name   : Alex
Health : 100

*/