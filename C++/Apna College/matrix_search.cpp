#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;

    int mat[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int target;
    cin>>target; 
    
    bool found = false;
    int r=0, c=m-1;

    while(r<n and c>=0){
        if(mat[r][c] ==  target){
            found = true; 
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element not exist";
    }

    return 0;
}