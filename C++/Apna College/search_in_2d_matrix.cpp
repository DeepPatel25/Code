#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int x;

    cout<<"Enter element which you want to search : ";
    cin>>x;

    bool flag=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x== arr[i][j]){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }

    if(flag){
        cout<<"Element found!";
    }
    else{
        cout<<"Element is not found.";
    }
    return 0;
}