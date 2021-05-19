
/*Factorial going n downwards*/
#include <stdio.h>
int main(void)
{
    /*Assigning variables as integers*/
    int i, n, n1 = 1;
    printf("Enter the factorial you want to calculate: ");
    scanf("%d", &n);
    // 0 factorial is 1
    if (n == 0)
    {
        printf("1");
    }
    if (n >= 1)
    {
        i = n;
        /*Computes downwads starting at n until it reaches 1*/
        while (i > 1)
        {
            n1 *= i;
            printf("%d * ", i); //printing the factorial as it calculates it
            i--;
        }
        printf("%d", i);
        printf(" = %d", n1);
    }
    // just to prevent user bound errors
    else
    {
        printf("Error, please enter a positive whole number");
    }

    return 0;
}