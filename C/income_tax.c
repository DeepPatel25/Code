#include<stdio.h> 

//Income tax 

/*

Enter your income : 600000
Your net income tax 20000.000000

*/

int main(){
    float income,tax=0;
    printf("Enter your income : ");
    scanf("%f",&income);

    if((income>250000) && (income<=500000)){
        tax = tax +  0.05 * (income - 250000);
    }
    else if((income>500000) && (income<=1000000)){
        tax = tax +  0.20 * (income - 500000);
    }
    else if(income>1000000){
        tax = tax +  0.30 * (income - 1000000);
    }
    printf("Your net income tax %f",tax);
    return 0;
}