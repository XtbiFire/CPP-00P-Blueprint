/*
◆───────────────────────────────◆
11. Class Name
◆───────────────────────────────◆

💡 Remember

A Class Name is the name given
to a Class by the programmer.

It is used to identify the
Class and create Objects.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Player
{
public:

    void ShowMessage()
    {
        cout << "This is Player Class." << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Player p1;

    // Calling Member Function
    p1.ShowMessage();

    return 0;
}

/*

▶ Execution Output

This is Player Class.

*/
