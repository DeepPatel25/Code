#include<iostream>
using namespace std;

/*

5
6
9
Not a Pythagorian Triplet

3
4
5
Pythagorian Triplet

*/
bool check(int x, int y, int z){
    int a = max(x,max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if((a*a) ==(b*b) + (c*c)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not a Pythagorian Triplet";
    }

    return 0;
}