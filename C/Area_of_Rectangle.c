#include<stdio.h> 

// Write a program for area of Rectangle.

/*  

Enter the Length of Rectangle :
5
Enter the Height of the Rectangle :
8
Area of Recctangle is 40.

*/

int main(){
    int l, h;
    
    printf("Enter the Length of Rectangle : \n");
    scanf("%d",&l);
    printf("Enter the Height of Rectangle : \n");
    scanf("%d",&h);

    printf("Area of rectangle is %d. ", l * h);
    
    return 0;
}