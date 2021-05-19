
#include <stdio.h>

int main(void)
{

    long double i = 1, n;
    /*Sets our variables to be able to compute numbers larger than the 50th pell term*/
    long double sum = 0;

    /*User Input*/
    printf("Enter how many terms you want: ");
    scanf("%Lf", &n);

    //Continuously adds our statement
    for (i; i <= n; i++)
    {
        sum += 1 / i;
    }
    printf("Your answer is: %Lf", sum);
    return 0;
}