
/*Factorial using For loops*/
#include <stdio.h>
int main(void)
{
    /*Assigning variables as integers*/
    int i, n, n1 = 1;
    //input
    printf("Enter the factorial you want to calculate: ");
    scanf("%d", &n);
    /*0! is 1*/
    if (n == 0)
    {
        printf("1");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            n1 = n1 * i;
        }
        printf("\n %d ", n1);
    }
    return 0;
}