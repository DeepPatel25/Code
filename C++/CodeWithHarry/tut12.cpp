#include<iostream>
using namespace std;

/*

Thr address of a is 0x61ff08
Thr address of a is 0x61ff08
The value at address b is 3
The address of c is 0x61ff04
The address of c is 0x61ff04
The value at address c is 0x61ff08
The value at address value_at(valiur_at(c)) is 3

*/

int main(){

    // Pointer

    int a=3;
    int* b = &a;
    
    cout<<"Thr address of a is "<<&a<<endl;
    cout<<"Thr address of a is "<<b<<endl;

    cout<<"The value at address b is "<<*b<<endl;
    
    // Pointer to pointer
    int** c= &b;
    
    cout<<"The address of c is "<<&b<<endl;
    cout<<"The address of c is "<<c<<endl;
    
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(valiur_at(c)) is "<<**c<<endl;
    
    return 0;
}