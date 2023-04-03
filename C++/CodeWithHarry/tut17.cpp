#include <iostream>
using namespace std;

/*

If you have 100000 rupees in your bank account, you will receive 104000 Rs after 1 year
For VIP If you have 100000 rupees in your bank account, you will receive 110000 Rs after 1 year

*/

inline int product(int a, int b)
{
    // Do not recommended to use below lines with inline functions
    // static int c = 0;  // This excutes only one
    // c = c + 1;  //Next time this function is run, the value of c will be retained
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// int strlen(const char *p){

// }

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b " << endl;
    // cin >> a >> b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money =  100000;
    cout<<"If you have "<< money << " rupees in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year"<<endl;
    cout<<"For VIP If you have "<<money<<" rupees in your bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year"<<endl;
    return 0;
}