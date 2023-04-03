#include<stdio.h> 

// Write a program to find Area of Circle and Volume of Cylinder.

/* 

Enter Radius of Circle and Cylinder
5
Enter Height of Cyliner
8
The Area of Circle 78.500000
The Volume of Cylinder is 628.000000

*/

int main(){
    int r,h;
    float area, volume;

    printf("Enter Radius of Circle and Cylinder \n");
    scanf("%d",&r);

    printf("Enter Height of Cylinder \n");
    scanf("%d",&h);

    area = 3.14 * r * r ;
    volume = 3.14 * r * r * h;

    printf("The Area of Circle %f \n",area);
    printf("The Volume of Cylinder is %f\n",volume);

    return 0;
}