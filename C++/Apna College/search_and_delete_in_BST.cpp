#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* searchBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }

    if(root->data==key){
        return root;
    }

    if(root->data>key){
        return searchBST(root->left,key);
    }

    return searchBST(root->right,key);
}

Node* inorderSucc(Node* root){

    Node* curr=root;
    while(curr && curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}

Node* deleteBST(Node* root,int key){

    if(key<root->data){
        root->left = deleteBST(root->left,key);
    }
    else if(key>root->data){
        root->right= deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSucc(root->right);
        root->data=temp->data;
        root->right = deleteBST(root->right,temp->data);
    }
    return root;
}

void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){

    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);

    if(searchBST(root,5)==NULL){
        cout<<"Key doesn't exixts."<<endl;
    }
    else{
        cout<<"Key Exists."<<endl;
    }

    inorderPrint(root);
    cout<<endl;
    root= deleteBST(root,2);
    inorderPrint(root);
    cout<<endl;
    return 0;
}