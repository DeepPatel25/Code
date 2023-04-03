#include<iostream>
using namespace std;

// Print prime numbers.

/*

10
25
11
13
17
19
23

*/
int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a; num<=b;num++){
        int i;
        for(i = 2; i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}