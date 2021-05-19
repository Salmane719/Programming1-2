
#include <stdio.h>
/*This is for the fib sequence using for loops */
int main(void)
{
    int i = 0, n;
    /*Sets our variables to be able to compute numbers larger than the 50th fib term*/
    unsigned long long fib1, fib2, fibnext;

    /*Set them as the first two fib terms*/
    fib1 = 0; //n-2
    fib2 = 1; //n-1

    /*User Input*/
    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    /*Getting rid of some user bound errors*/
    if (n >= 1)
    {
        printf("The fibonocci sequence:\n");
        /*Due to the fact c is compiled top down we can set variables to the previous term*/
        for (i; i < n; i++)
        {
            fibnext = fib1 + fib2;
            printf("%llu \n", fib1);
            fib1 = fib2;
            fib2 = fibnext;
        }
    }
    else
    {
        printf("Please enter a positive whole number");
    }

    return 0;
}