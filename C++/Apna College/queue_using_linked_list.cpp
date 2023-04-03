#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class deep{
    node* front;
    node* back;

    public:
    deep(){
        front=NULL;
        back=NULL;
    }

    void push(int x){

        node* n=new node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element in Queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
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