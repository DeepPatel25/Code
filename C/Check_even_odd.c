#include<stdio.h> 

//C program to check whether a number is even or odd.

/*  

Enter the number 15
Number is odd.

*/

/*

Enter the number 20
Number is even.

*/

int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
    return 0;
}