#include<stdio.h> 
#include<math.h>

// Find the Value of x raise to y. 

/*

Enter the value of x
5
Enter the value of y
6
The valur of x raise to y is 15625.000000

*/

int main(){
    int x,y;
    printf("Enter the value of x \n");
    scanf("%d",&x);

    printf("Enter the value of y  \n");
    scanf("%d",&y);

    printf("The valur of x raise to y is %f \n",pow(x,y));
    return 0;
}