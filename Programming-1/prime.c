
#include <stdio.h>

int main(void)
{
    int num;
    int n;
    /*USER INPUT*/
    printf("You want to find all the prime numebers less than... ");
    scanf("%d", &n);
    int prime[n];
    //Generates the array to n-2
    for (int i = 0; i < n - 2; i++)
    {
        prime[i] = i + 2;
    }

    //Make all non prime numbers 0
    for (int i = 0; i < n; i++)
    {
        num = prime[i];
        if (num != 0)
        {
            for (int j = i + 1; j < n + 1; j++)
            {
                if (prime[j] % num == 0)
                {
                    prime[j] = 0;
                }
            }
        }
    }
    /*Prints the results */
    for (int i = 0; i < n; i++)
    {
        if (prime[i] != 0)
        {
            printf("%d ", prime[i]);
        }
    }
    return 0;
}