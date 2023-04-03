#include<iostream>
using namespace std;

/*

5
6
******
******
******
******
******

*/

int main(){
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j =1;j<=col;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}