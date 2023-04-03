#include <iostream>
using namespace std;


/*

Enter id of your Item 1
101
Enter Price of your Item
256
Enter id of your Item 2
205
Enter Price of your Item
466
Enter id of your Item 3
55
Enter Price of your Item
565
The Price of item with Id 101 is 256
The Price of item with Id 205 is 466
The Price of item with Id 55 is 565

*/

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter id of your Item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your Item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}