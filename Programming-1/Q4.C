
#include <stdio.h>
int main(void)
{
    int i = 0, n;
    /*Sets our variables to be able to compute numbers larger than the 50th pell term*/
    unsigned long long pav1, pav2, pav3, pavNext;

    /*Set them as the first two fib terms*/
    pav1 = 1; //n-3
    pav2 = 1; //n-2
    pav3 = 1; //n-1

    /*User Input*/
    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    /*Getting rid of some user bound errors*/
    if (n >= 1)
    {
        printf("The pav sequence:\n");
        /*Due to the fact c is compiled top down we can set variables to the previous term*/
        for (i; i < n; i++)
        {
            pavNext = pav2 + pav1;
            printf("%llu \n", pav1);
            pav1 = pav2;
            pav2 = pav3;
            pav3 = pavNext;
        }
    }
    else
    {
        printf("Please enter a positive whole number");
    }

    return 0;
}