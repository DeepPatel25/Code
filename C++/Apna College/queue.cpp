#include<bits/stdc++.h>
using namespace std;

#define n 20

class deep{
    int* arr;
    int front;
    int back;

    public:
    deep(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int x){
        if(back==n-1){
            cout<<"Queue is overflow."<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"No element in Queue."<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"No element in Queue."<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
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
    cout<<d.peek()<<endl;
    d.pop();
    cout<<d.peek()<<endl;
    d.pop();
    cout<<d.peek()<<endl;
    d.pop();
    cout<<d.peek()<<endl;
    d.pop();
    cout<<d.empty()<<endl;

    return 0;
}