
/*Factorial WHILE LOOPS*/
#include <stdio.h>
int main(void)
{
    /*Assigning variables as integers*/
    int i = 1, n, n1 = 1;
    printf("Enter the factorial you want to calculate: ");
    scanf("%d", &n);
    // 0 factorial is 1
    if (n == 0)
    {
        printf("1");
    }
    if (n >= 1)
    {
        while (i <= n)
        {
            n1 *= i;
            i++;
        }
        printf("\n %d", n1);
    }
    // just to prevent user bound errors
    else
    {
        printf("Error, please enter a positive whole number");
    }

    return 0;
}