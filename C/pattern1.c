#include <stdio.h>


/*

Enter the value of n
5
*
**
***
****
*****

*/
int main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}