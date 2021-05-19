
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int quadratic(double a, double b, double c, double *r1, double *r2);
bool evaluate(double a, double, double c, double r1, double r2);

/*DOESN'T WORK FOR QUADRATICS THAT HAVE ROOTS WHICH AREN'T INTEGERS*/
int main(void)
{
    double r1, r2, a, b, c, x;

    /*USER INPUT*/
    printf("What is the coefficient of x squared? \n");
    scanf("%lf", &a);
    printf("What is the coefficient of x? \n");
    scanf("%lf", &b);
    printf("What is last coefficient? \n");
    scanf("%lf", &c);
    printf("Do you want to compute the first or second root? Enter 1 or 2\n");
    scanf("%lf", &x);

    //Solves the quadratic equation and prints it if the solutions are valid
    quadratic(a, b, c, &r1, &r2);
    if (evaluate(a, b, c, r1, r2) == true)
    {
        if (x == 1)
            x = r1;
        if (x == 2)
            x = r2;
        printf("Your answer is %lf, and it is true for the quadratic function you inputted", x);
    }
    else
    {
        printf("Sorry, No solutions exist for your selected root");
    }

    return 0;
}

/*Solves the quadratic function*/
int quadratic(double a, double b, double c, double *r1, double *r2)
{
    if (((b * b) - 4 * a * c) < 0)
    {
        printf("Sorry this equation is nothing more than your imagination! ");
    }

    /*if a is not 0 we're going to use the regular quadratic formula*/
    else if (a != 0)
    {
        *r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        *r2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    }
    /*Due to the fact a is 0 are quadratic now looks like bx + c = 0, however we can still work out the roots*/
    else if (a == 0)
    {
        // work out bx + c = 0 into x = (-c)/b
        *r1 = (-c) / b;
        *r2 = (-c) / b;
        printf("Only one root exists\n");
    }
    /*The user probably inputed an invalid set of instructions and now there is an error*/
    else
    {
        printf("Somehow something went wrong! \n Check if you inputed numbers and no invalid operators. ");
        return -1;
    }
}

// Evaluates if the quadratic function solutions are true
bool evaluate(double a, double b, double c, double r1, double r2)
{
    if ((a * r1 * r1 + b * r1 + c == 0) || a * r2 * r2 + b * r2 + c == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}