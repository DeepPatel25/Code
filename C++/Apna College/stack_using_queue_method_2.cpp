#include<bits/stdc++.h>
using namespace std;

// Making pop opertaion costly.

class deep{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    deep(){
        N=0;
    }

    void push(int val){

        q1.push(val);
        N++;
    }

    void pop(){
        if(q1.empty()){
            return;
        }   
        while(q1.empty() !=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.empty() !=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans= q1.front();
        q2.push(ans);

        queue<int> temp=q1;
        q1=q2;
        q2=temp;

        return ans;

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
    
    return 0;
}