// Multiple language robot.
#include<iostream>
using namespace std;

int main(){
    
    char button;
    cout<<"input a character."<<endl;
    cin>>button;

    switch (button)
    {       
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namaste";
        break;
    case 'c':
        cout<<"Salute";
        break;
    case 'd':
        cout<<"Hola";
        break;
    case 'e':
        cout<<"Ciao";
        break; 
    default:
        cout<<"I am still learning more.";
        break;
    }

    return 0;
}