#include<iostream>
using namespace std;

/*

0
1
3
4

*/
int main(){

    // Break and Continue

    
    // for(int i = 0; i < 5; i++){
    //     cout<<i<<endl; 
    //     if(i==2){
    //         break;
    //     }
    // }

    for(int i = 0; i < 5; i++){
     
    if(i==2){
        continue;
    }
    cout<<i<<endl;
    }
    return 0;
}