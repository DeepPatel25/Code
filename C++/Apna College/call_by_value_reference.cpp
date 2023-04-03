#include<iostream>
using namespace std;

/*

Call by value of x is 4 and y is 5
Call by Reference of x is 5 and y is 4

*/

void swapVal(int a, int b){
    int temp=a; 
    a =b;
    b=temp;
}

void swapRef(int *a,int*b){
    int temp= *a;
    *a = *b;
    *b= temp;
}

int main(){
    int x=4,y=5;
    swapVal(x,y);
    cout<<"Call by value of x is "<<x<<" and y is "<<y<<endl;

    swapRef(&x,&y);
    cout<<"Call by Reference of x is "<<x<<" and y is "<<y<<endl;
    return 0;
}