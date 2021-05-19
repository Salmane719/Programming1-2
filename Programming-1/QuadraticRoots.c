
#include <stdio.h>
#include <math.h>

int main(void)
{
    /*Initializing our variables as doubles*/
    double a, b, c, r1, r2;

    /*Asking the user for their quadratic ax^2 + bx + c = 0*/
    printf("What is the coefficient of x squared? \n");
    scanf("%lf", &a);
    printf("What is the coefficient of x? \n");
    scanf("%lf", &b);
    printf("What is last coefficient? \n");
    scanf("%lf", &c);

    /*Checks whether or not the input equation is imaginary*/
    if (((b * b) - 4 * a * c) < 0)
    {
        printf("Sorry this equation is nothing more than your imagination! ");
    }

    /*if a is not 0 we're going to use the regular quadratic formula*/
    else if (a != 0)
    {
        r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        r2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

        printf("Your values are %.2lf and %.2lf", r1, r2);
    }
    /*Due to the fact a is 0 are quadratic now looks like bx + c = 0, however we can still work out the roots*/
    else if (a == 0)
    {
        // work out bx + c = 0 into x = (-c)/b
        r1 = (-c) / b;
        printf("Your value is %.2lf", r1);
    }
    /*The user probably inputed an invalid set of instructions and now there is an error*/
    else
    {
        printf("Somehow something went wrong! \n Check if you inputed numbers and no invalid operators. ");
    }
    return 0;
}