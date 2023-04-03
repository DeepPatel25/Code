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

    // spiral order print

    int row_start=0, row_ends = n-1, column_start = 0, column_ends = m-1;

    while(row_start<=row_ends && column_start<= column_ends){

        // For row_start

        for(int col = column_start; col<=column_ends;col++){
            cout<<arr[row_start][col]<<" ";
        }

        row_start++;

        // For Column end

        for(int row=row_start;row<= row_ends;row++){
            cout<<arr[row][column_ends]<<" ";
        }

        column_ends--;

        // For row end

        for (int col=column_ends;col>=column_start;col--){
            cout<<arr[row_ends][col]<<" ";
        }

        row_ends--;

        // Fpr colum start

        for(int row = row_ends;row>=row_start;row--){
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    }

    return 0;
}