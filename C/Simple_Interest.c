#include<stdio.h> 

// Calculate the Simple Interest.

/*

Enter the Principal value
15000
Enter the Rate
10
Enter the no. of years
5
The value  of Simple Interest is 7500.000000

*/

int main(){
    int pri,rate,years;
    float simpleInterest;

    printf("Enter the Principal value \n");
    scanf("%d",&pri);
    printf("Enter the Rate \n");
    scanf("%d",&rate);
    printf("Enter the no. of years \n");
    scanf("%d",&years);

    simpleInterest = pri * rate * years * 0.01;
    printf("The value  of Simple Interest is %f",simpleInterest);

    return 0;
}