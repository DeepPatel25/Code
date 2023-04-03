#include<stdio.h> 

/*

C
It is not lowercase.

*/

/*

c
It is lowercase.

*/

int main(){
    char ch;
    printf("Enter the Character : \n");
    scanf("%c",&ch);
    if((ch<=122) && (ch>=97)){
        printf("It is lowercase.");
    }
    else{
        printf("It is not lowercase.");
    }
    return 0;
}