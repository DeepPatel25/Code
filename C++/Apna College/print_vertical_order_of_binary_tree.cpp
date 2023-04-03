#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=1;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

struct Node{
    int key;
    struct Node* right;
    struct Node* left;

    Node(int val){
        key=val;
        right=NULL;
        left=NULL;
    }
};

void getVerticalOrder(Node* root,int hdis,map<int,vi> &m){
    if(root==NULL){
        return;
    }

    m[hdis].push_back(root->key);
    getVerticalOrder(root->left,hdis-1,m);
    getVerticalOrder(root->right,hdis+1,m);


}

signed main(){
    
    Node* root = new Node(10);
    root->left=new Node(7);
    root->right=new Node(4);
    root->left->left=new Node(3);
    root->left->right=new Node(11);
    root->right->left=new Node(14);
    root->right->right=new Node(6);


    map<int,vector<int>> m;
    int hdis=0;

    getVerticalOrder(root,hdis,m);
    
    map<int,vi> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->ss).size();i++){
            cout<<(it->ss)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}