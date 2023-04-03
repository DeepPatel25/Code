#include<stdio.h> 

// Sum of Natural numbers.

/*

Enter the last natural number you want the sum of : 15
The sum of natural number is 120

*/

int main(){
    int n, sum = 0;
    printf("Enter the last natural number you want the sum of : ");
    scanf("%d",&n);
    
    // Runs in Linear time 
    // for(int i = 1; i <= n ; i++){  
    //     sum = sum + i;
    // }

    // Runs in Constant time
    // Short formula for Sum of Natural numbers
    sum = ( n * n + n)/2;  
    
    printf("The sum of natural number is %d ",sum);
    return 0;
}