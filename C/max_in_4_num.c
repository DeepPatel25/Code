#include<stdio.h> 

/*

Enter a :
45
Enter b :
78
Enter c :
36
Enter d :
19
78 is maximum.

*/

int main(){
    int a,b,c,d;
    printf("Enter a : \n");
    scanf("%d",&a);
    
    printf("Enter b : \n");
    scanf("%d",&b);
    
    printf("Enter c : \n");
    scanf("%d",&c);
    
    printf("Enter d : \n");
    scanf("%d",&d);

    if((a>b)&&(a>c)&&(a>d)){
        printf("%d is maximum.",a);
    }
    else if((b>c)&&(b>d)){
        printf("%d is maximum.",b);
    }
    else if(c>d){
        printf("%d is maximum.",c);
    }
    else{
        printf("%d is maximum.",d);
    }

    return 0;
}