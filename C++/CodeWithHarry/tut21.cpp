#include<iostream>
using namespace std;

/*

The value of a is 1
The value of b is 2
The value of c is 4
The value of d is 34
The value of e is 89

*/

class employee{
    private:
       int a, b, c;
    public :
       int d, e;
       void setData(int a1, int b1, int c1); //Declaration
       void getData(){
           cout<<"The value of a is "<<a<<endl;
           cout<<"The value of b is "<<b<<endl;
           cout<<"The value of c is "<<c<<endl;
           cout<<"The value of d is "<<d<<endl;
           cout<<"The value of e is "<<e<<endl;
       }
};

void  employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

};

int main(){
    employee harry;
    // harry.a = 134; //This will throw Error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}