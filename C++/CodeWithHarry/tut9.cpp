#include<iostream>
using namespace std;

/*

Tell me your Age :
21
You are 21

Tell me your Age :
25
No special cases

*/
int main(){
    int age;
    cout<<"Tell me your Age : "<<endl;
    cin>>age;

    // If-Else Ladder  Example
    // if(age<18){
    //     cout<<"You can not come to my party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the  party "<<endl;
    // }
    // else{
    //     cout<<"You can come to the party";
    // }
    
    // Switch case Example
    switch(age){
        case 18:
            cout<<"You are 18";
            break;
        case 15:
            cout<<"You are 15";
            break;
        case 21:
            cout<<"You are 21";
            break;
        case 17:
            cout<<"You are 17";
            break;
        default:
            cout<<"No special cases";
            break;
    }
    return 0;
}