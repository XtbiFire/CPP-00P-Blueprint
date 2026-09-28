/*
◆───────────────────────────────◆
25. public vs private vs protected
◆───────────────────────────────◆

💡 Remember

public, private and protected
are Access Specifiers.

They decide who can access
the Members of a Class.

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name = "Alex";

protected:

    int rollNo = 101;

private:

    int marks = 95;

public:

    void ShowData()
    {
        cout << "Name    : "
             << name << endl;

        cout << "Roll No : "
             << rollNo << endl;

        cout << "Marks   : "
             << marks << endl;
    }
};

int main()
{
    Student s1;

    // public Member
    cout << s1.name << endl;

    // protected ❌
    // cout << s1.rollNo;

    // private ❌
    // cout << s1.marks;

    cout << endl;

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Alex

Name    : Alex
Roll No : 101
Marks   : 95

*/