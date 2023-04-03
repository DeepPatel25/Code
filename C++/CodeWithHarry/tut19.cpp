#include<iostream>
using namespace std;

/*

Using function with 2 arguments
This sum of 3 and 6 is 9
Using function with 3 arguments
This sum of 3,7 and 6 is 16
The volume of a Cylinder is 7065
The volume of a Cube is 27
The volume of Rectangular box is 210

*/

int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;    
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a Cylinder.
int vol(double r,int h){
    return (3.14 * r * r * h);
}

// Calculate the volume of a Cube.
int vol(int a){
    return (a*a*a);
}

// Rectangular box
int vol(int l, int b ,int h){
    return (l*b*h);
}

int main(){
    cout<<"This sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"This sum of 3,7 and 6 is "<<add(3,7,6)<<endl;
    cout<<"The volume of a Cylinder is "<<vol(15,10)<<endl;
    cout<<"The volume of a Cube is "<<vol(3)<<endl;
    cout<<"The volume of Rectangular box is "<<vol(5,6,7)<<endl;   
    return 0;
}