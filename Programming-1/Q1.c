
#include <stdio.h>
#include <stdbool.h>
bool evaluate(double a, double, double c, double x);

int main(void)
{
    double x, a, b, c;

    /*Asking the user for their quadratic ax^2 + bx + c = 0*/
    printf("What is the coefficient of x squared? \n");
    scanf("%lf", &a);
    printf("What is the coefficient of x? \n");
    scanf("%lf", &b);
    printf("What is last coefficient? \n");
    scanf("%lf", &c);
    printf("Enter your X \n");
    scanf("%lf", &x);

    if (evaluate(a, b, c, x) == true)
    {
        printf("\nThe value you inputted for x is a root");
    }
    else
    {
        printf("The value you inputted for X is not a root");
    }
    return 0;
}
bool evaluate(double a, double b, double c, double x)
{
    if (a * x * x + b * x + c == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
