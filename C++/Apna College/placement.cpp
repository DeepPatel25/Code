#include<bits/stdc++.h>
using namespace std;

char ans(char first,char second,char third,char x,char y){
    if(first==x){
        return x;
    }
    else if(first==y){
        return y;
    }
    else if(second==y){
        return x;
    }
    else if(second==y){
        return y;
    }
    else if(third==y){
        return x;
    }
    else if(third==y){
        return y;
    }
}

int main(){
    
    int T;
    cin>>T;
    while(T--){
        char first,second,third;
        cin>>first>>second>>third;
        char x,y;
        cin>>x>>y;

        cout<<ans(first,second,third,x,y)<<endl;
        
    }

    return 0;
}