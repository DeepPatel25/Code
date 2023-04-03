#include<iostream>
using namespace std;

// Function Prototype
// type function-name (arguments);
// int sum(int a,int b);   Accceptable
// int sum(int a,b);    Not Acceptable

/*

Enter First Number
25
Enter Second Number
17
The sum is 42
Hello, Good Morning

*/
int sum(int,int);
void g();

int main(){
    int num1,num2;
    
    cout<<"Enter First Number "<<endl;
    cin>>num1;

    cout<<"Enter Second Number "<<endl;
    cin>>num2;

    // num1 and num2 are actual parameteres

    cout<<"The sum is "<<sum(num1,num2)<<endl;
    
    g();
    return 0;
}

int sum(int a, int b){
    //  Formal Paramteres a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g(){
    cout<<"Hello, Good Morning";
}