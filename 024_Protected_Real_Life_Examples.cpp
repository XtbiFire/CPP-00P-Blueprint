/*
◆───────────────────────────────◆
24. Protected Real Life Examples
◆───────────────────────────────◆

💡 Remember

protected Members are not
accessible from outside
the Class.

They are mainly meant for
Child Classes in Inheritance.

🌐 Code

*/

#include <iostream>
using namespace std;

class GameObject
{
protected:

    int health = 100;

public:

    void ShowHealth()
    {
        cout << "Health : "
             << health << endl;
    }
};

int main()
{
    GameObject obj;

    obj.ShowHealth();

    // Wrong ❌
    // cout << obj.health;

    return 0;
}

/*

▶ Execution Output

Health : 100

*/