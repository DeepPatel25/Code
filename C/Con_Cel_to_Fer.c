#include<stdio.h> 

// Program to convert Celsius Temprature to Faarenheit Temperature.

/*

Enter the value of Celsius
0
The value of Farenheit is 32.000000

*/

int main(){
    float c,f;
    printf("Enter the value of Celsius\n");
    scanf("%f",&c);

    f = ( c * 9 / 5) + 32;

    printf("The value of Farenheit is %f",f);
    return 0;
}