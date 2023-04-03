#include<stdio.h>

// C Program Check whether student pass or fail in exam.

/*

Enter Physics Marks
45
Enter Chemistry Marks
36
Enter Maths Marks
50
Your total percentage is 43.000000 and you are pass.

*/

int main(){
    int maths,physics,chemistry;
    float total;
    printf("Enter Physics Marks \n");
    scanf("%d",&physics);
    
    printf("Enter Chemistry Marks \n");
    scanf("%d",&chemistry);
    
    printf("Enter Maths Marks \n");
    scanf("%d",&maths);
    
    total = (physics + chemistry + maths)/3;
    if((total<40) || (maths<33) || (chemistry<33) || (physics<33)){
        printf("Your total percentage is %f and you are failed.\n",total);
    }
    else{
        printf("Your total percentage is %f and you are pass.\n",total);
    }
    return 0;
}