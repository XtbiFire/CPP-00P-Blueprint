/*
◆───────────────────────────────◆
21. Private Real Life Examples
◆───────────────────────────────◆

💡 Remember

private is used to protect
important information.

Only the Class itself can
directly access private
Members.
◆───────────────────────────────◆

🌍 Real Life Examples

Example 1 : ATM

PIN
Balance
Password

🔒 Hidden (private)

Accessible only through

✔ Deposit()
✔ Withdraw()
✔ CheckBalance()

◆───────────────────────────────◆

Example 2 : Mobile Phone

Password
Fingerprint
Face ID

🔒 Hidden (private)

You cannot directly
change them from outside.

◆───────────────────────────────◆

Example 3 : Hospital

Patient Records

Diagnosis
Medical History
Reports

🔒 Hidden (private)

Only authorized doctors
can access them.

◆───────────────────────────────◆

Example 4 : Online Game

Coins
Level
Inventory

🔒 Hidden (private)

Players cannot directly
change these values.

The Game updates them
through its own functions.

◆───────────────────────────────◆

⭐ Key Points

✔ private protects data.

✔ Only the Class can
directly access private
Members.

✔ Prevents accidental
changes.

✔ Improves Security.

✔ Makes software more
reliable.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class GameAccount
{
private:

    int coins = 100;

public:

    void ShowCoins()
    {
        cout << "Coins : "
             << coins << endl;
    }
};

int main()
{
    GameAccount player;

    player.ShowCoins();

    // Wrong ❌
    // player.coins = 999999;

    return 0;
}

/*

▶ Execution Output

Coins : 100

*/