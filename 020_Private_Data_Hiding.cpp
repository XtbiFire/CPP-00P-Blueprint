/*
◆───────────────────────────────◆
20. Private Data Hiding
◆───────────────────────────────◆

💡 Remember

Data Hiding means protecting
important data from direct
access outside the Class.

It is achieved using
private Access Specifier.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine your ATM Account.

          Bank Server
               │
        ┌─────────────┐
        │ Balance     │
        │ ₹5000       │
        └─────────────┘
               🔒

Can anyone write

Balance = ₹10,00,000 ?

❌ No.

The Bank only allows

✔ Deposit()

✔ Withdraw()

✔ CheckBalance()

Similarly,

private hides important
data from direct access.

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class BankAccount
{
private:

    // Hidden Data
    double balance = 5000;

public:

    // Deposit Function
    void Deposit(double amount)
    {
        balance = balance + amount;
    }

    // Show Balance
    void ShowBalance()
    {
        cout << "Balance : ₹"
             << balance << endl;
    }
};

// Main Function
int main()
{
    BankAccount account;

    account.ShowBalance();

    account.Deposit(2000);

    account.ShowBalance();

    // Wrong ❌
    // account.balance = 1000000;

    return 0;
}

/*

▶ Execution Output

Balance : ₹5000

Balance : ₹7000

*/