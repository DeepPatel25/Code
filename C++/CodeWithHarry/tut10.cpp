#include<iostream>
using namespace std;

/*

6X1=6
6X2=12
6X3=18
6X4=24
6X5=30
6X6=36
6X7=42
6X8=48
6X9=54
6X10=60

*/

int main(){
    
    // For loop
    // for (int i = 0; i < 40; i++){
    //     cout<<i<<endl; 
    // }
    
    // Infinite For loop
    // for (int i = 0; 34 < 40; i++){
    //     cout<<i<<endl; 
    // }

    // While Loop
    // int i = 0;
    // while(i<40){
    //     cout<<i<<endl;
    //     i++;
    // }

    //  Infinite While Loop
    // int i = 0;
    // while(5<40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // // Do-while loop
    // int i=0;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<50);
    
    int n = 6;
    for(int i=1;i<=10;i++){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
    return 0;
}