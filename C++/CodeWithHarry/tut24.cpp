#include <iostream>
using namespace std;

/*

Enter the id
1
The id of this employee is 1 and this is Employee number 1
The value of count is 1
Enter the id
2
The id of this employee is 2 and this is Employee number 2
The value of count is 2
Enter the id
3
The id of this employee is 3 and this is Employee number 3
The value of count is 3

*/

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // Throws an error.
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class employee
int Employee ::count; //Default value is 0

int main()
{
    Employee harry, rohan, lovish;

    // harry.id = 1;
    // harry.count = 1; Cannot do this as id and count are private.

    harry.setData();
    harry.getData();
    Employee ::getCount();

    rohan.setData();
    rohan.getData();
    Employee ::getCount();

    lovish.setData();
    lovish.getData();
    Employee ::getCount();

    return 0;
}