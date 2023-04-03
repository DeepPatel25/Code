#include<bits/stdc++.h>
using namespace std;

class deep{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval= s2.top();
        s2.pop();
        return topval;
    }

    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    
    deep d;
    d.push(1);
    d.push(2);
    d.push(3);
    d.push(4);
    cout<<d.pop()<<endl;
    d.push(5);
    cout<<d.pop()<<endl;
    cout<<d.pop()<<endl;
    cout<<d.pop()<<endl;
    cout<<d.pop()<<endl;
    cout<<d.pop()<<endl;
    return 0;
}