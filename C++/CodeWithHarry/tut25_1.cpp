#include <iostream>
using namespace std;

/*

Enter id of employee 
12
The id of this employee is 12
Enter id of employee
35
The id of this employee is 35
Enter id of employee
656
The id of this employee is 656
Enter id of employee
45
The id of this employee is 45

*/

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter id of employee " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry,rohan,lovish,shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}