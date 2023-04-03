#include<stdio.h> 

void IntegerTOBinary(int n){
    int r;
    if(n!=0){
        r=n%2;
        n=(int)(n/2);
        IntegerTOBinary(n);
        printf("%d", r);
    }
}

void FractionalTOBinary(float n) {
    int r, count = 0;

    while(count<6) {
        n*=2;
        r =(int)n;
        printf("%d",r);
        n= n-r;
        count++;
    }
}

int main(){
    
    float num;
    int int_part;
    float fract_part;

    printf("Enter the num : ");
    scanf("%f", num);

    int_part = (int)num;
    printf("Integer part : %d", int_part);

    fract_part = num - int_part;
    printf("Fractional part : %f", fract_part);

    printf("\n Binary conversion : ");
    IntegerTOBinary(int_part);
    printf(".");
    FractionalTOBinary(fract_part);
    return 0;
}