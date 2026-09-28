/*
◆───────────────────────────────◆
19. Access Specifier : private
◆───────────────────────────────◆

💡 Remember

private is an Access Specifier.

Members declared as private
cannot be accessed directly
from outside the Class.

Only Member Functions of the
same Class can access them.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class BankAccount
{
private:

    // Private Data Member
    double balance = 5000;

public:

    // Public Member Function
    void ShowBalance()
    {
        cout << "Balance : ₹"
             << balance << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    BankAccount account;

    // Correct Way
    account.ShowBalance();

    // Wrong Way ❌
    // cout << account.balance;

    return 0;
}

/*

▶ Execution Output

Balance : ₹5000

*/
