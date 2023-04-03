#include<stdio.h> 

// C program to find whether year is leap year or not.

/*

Enter the Year : 2020
This year is Leap year.

*/

/*

Enter the Year : 2019
This year is not Leap year.

*/

int main(){
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("This year is Leap year.");
            }
            else{
                printf("This year is not Leap year.");
            }
        }
        else{
            printf("This year is Leap year.");
        }
    }
    else{
        printf("This year is not Leap year.");
    }
    return 0;
}