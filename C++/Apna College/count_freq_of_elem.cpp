#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=1;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main(){
    
    int n;
    cin>>n;

    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map<int,int> freq;

    rep(i,0,n){
        freq[a[i]]++;
    }

    unordered_map<int,int> :: iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->ff <<" "<<it->ss<<endl;
    }


    return 0;
}