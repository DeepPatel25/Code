#include<stdio.h> 

// Multiplication table

/*

Enter the value of number whose multiplication table is to be printed
18
The multiplication table of 18 is :
18 x 1 = 18
18 x 2 = 36
18 x 3 = 54
18 x 4 = 72
18 x 5 = 90
18 x 6 = 108
18 x 7 = 126
18 x 8 = 144
18 x 9 = 162
18 x 10 = 180

*/

int main(){
    int n;
    printf("Enter the value of number whose multiplication table is to be printed\n");
    scanf("%d",&n);

    printf("The multiplication table of %d is : \n",n);

    for(int i = 1; i < 11 ; i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
    return 0;
}