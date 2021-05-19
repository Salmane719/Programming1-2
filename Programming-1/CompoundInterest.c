
#include <stdio.h>
#include <math.h>

/*COMMENT LATER*/
int main(void)
{
    /*Declare our variables as doubles*/
    double A, P, k, r, n;
    /*We make our k a constant as suggested by the second part of the questions*/
    k = 12;
    /*To evaluate what the user wants to calculate*/
    int input;
    printf("Which of these do you want to calculate? \n1. Amount\n2. Principal\n3. Number of years\n4. Interest Rate\nSelect either 1, 2, 3, or 4: ");
    scanf("%d", &input);

    if (input == 1)
    {
        /*Checks for the Amount*/
        printf("Please enter the starting principal (P): ");
        scanf("%lf", &P);
        printf("Please enter the number of years: ");
        scanf("%lf", &n);
        printf("Please enter the interest rate (as percentage rate per annum) (r): ");
        scanf("%lf", &r);

        /*Where the big maths stuff goes down*/
        A = (P * (pow(1 + (r / (100.0 * k)), (n * k))));

        /*Prints our answer down to two decimal places*/
        printf("The amount is %.2lf", A);
    }
    else if (input == 2)
    {
        /*Checks for the principal*/
        printf("Please enter the final accumulated amount (A):");
        scanf("%lf", &A);
        printf("Please enter the number of years: ");
        scanf("%lf", &n);
        printf("Please enter the interest rate (as percentage rate per annum) (r): ");
        scanf("%lf", &r);

        P = A / (pow(1 + (r / (100 * k)), (n * k)));
        printf("The Principal is %.2lf", P);
    }
    else if (input == 3)
    {
        /*Checks for the number of years*/
        printf("Please enter the final accumulated amount (A):");
        scanf("%lf", &A);
        printf("Please enter the starting principal (P): ");
        scanf("%lf", &P);
        printf("Please enter the interest rate (as percentage rate per annum) (r): ");
        scanf("%lf", &r);

        n = ((log(A / P)) / (log(1 + (r / (100 * k))))) / k;
        printf("The number of years is %.2lf", n);
    }
    else if (input == 4)
    {
        /*Checks for the interest rate*/
        printf("Please enter the final accumulated amount (A):");
        scanf("%lf", &A);
        printf("Please enter the starting principal (P): ");
        scanf("%lf", &P);
        printf("Please enter the number of years: ");
        scanf("%lf", &n);

        r = 100 * k * (pow((A / P), (1 / (n * k))) - 1);
        printf("The interest rate was %.2lf", r);
    }
    else
    {
        /*Possible errors can include false inputs such as alphabetical charachters*/
        printf("Error! Try entering a valid integer as an operator");
    }

    return 0;
}