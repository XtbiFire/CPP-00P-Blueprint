/*
◆───────────────────────────────◆
22. public vs private
◆───────────────────────────────◆

💡 Remember

Both public and private are
Access Specifiers.

The difference is who can
access the Members.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a House.

          House
             │
   ┌─────────┴─────────┐
   ▼                   ▼

Drawing Room      Locker Room

(public)          (private)

Guests can enter  Only Owner
freely.           has access.

Similarly,

public Members

✔ Open Access

private Members

🔒 Restricted Access

◆───────────────────────────────◆

⭐ Comparison Table

public

✔ Accessible from outside
✔ Less Secure
✔ Used for Member Functions
✔ Open Access

private

✔ Not accessible outside
✔ More Secure
✔ Used for important Data
✔ Restricted Access

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name = "Alex";

private:

    int marks = 95;

public:

    void ShowMarks()
    {
        cout << "Marks : "
             << marks << endl;
    }
};

int main()
{
    Student s1;

    // public Member
    cout << "Name : "
         << s1.name << endl;

    // private Member
    // cout << s1.marks; ❌

    s1.ShowMarks();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Marks : 95
 
*/