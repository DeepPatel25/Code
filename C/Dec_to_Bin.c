#include<stdio.h> 

// Decimal to Binary Converter.

/*

Decimal number is 45
Binary value : 101101

*/

int main(){
    int n, arr[100],i=0;
    printf("Enter positive Decimal number : ");
    scanf("%d",&n);
    printf("\nDecimal number is %d ",n);
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    printf("\nBinary value : ");
    i = i - 1;
    while(i>=0){
        printf("%d",arr[i]);
        i=i-1;
    }
    return 0;
}