#include<iostream>
using namespace std;

/*

The value of x is 4 and The value of y is 5
The value of x is 5 and The value of y is 4

*/

// int sum(int a, int b){
//     int c =a + b;
//     return c;
// }

//This will not swap a and b
// void swap(int a , int b ){  // temp a b
//     int temp = a;           // 4    5 4
//     a =b;                   // 4    5 5 
//     b = temp;               // 4    5 4
// }

// Call by Reference using Pointer
void swapPointer(int* a ,int* b ){  // temp a b
    int temp = *a;                  // 4    5 4
    *a = *b;                        // 4    5 5 
    *b = temp;                      // 4    5 4
}

// Call by Reference using C++ reference Variables
// int &
void swapreferenceVar(int &a ,int &b ){  // temp a b
    int temp = a;                  // 4    5 4
    a = b;                         // 4    5 5 
    b = temp;                      // 4    5 4
    // return a;
}

int main(){
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of x is "<<x<<" and The value of y is "<<y<<endl;   
    
    // swap(x, y);   //This will not swap a and b
    // swapPointer(&x,&y); //This will not swap a and b using Pointers
    swapreferenceVar(x,y);  // This will swap a and b using reference variables
    // swapreferenceVar(x,y) = 766;  // This will swap a and b using reference variables

    cout<<"The value of x is "<<x<<" and The value of y is "<<y<<endl;

    return 0;
}