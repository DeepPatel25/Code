#include<bits/stdc++.h>
using namespace std;

class deep{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    deep(){
        N=0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }
};

int main(){
    
    deep d;
    d.push(1);
    d.push(2);
    d.push(3);
    d.push(4);

    cout<<d.top()<<endl;
    d.pop();
    cout<<d.top()<<endl;
    d.pop();
    cout<<d.top()<<endl;
    d.pop();
    cout<<d.top()<<endl;
    d.pop();

    cout<<d.size()<<endl;
    return 0;
}