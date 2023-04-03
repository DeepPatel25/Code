#include<iostream>
using namespace std;

// Check whether a number is prime or not. 

/*

25
It is a non-prime

17
It is a prime number.

*/
int main(){
    int n;
    cin>>n;
    int i;

    for(i = 2; i<n; i++){
        if(n%i==0){
            cout<<"It is a non-prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"It is a prime number."<<endl;
    }
    
    return 0;
}