
#include <stdio.h>
#include <math.h>
void repayment(double P, double r, double n, double *monthlyRepayment);
int main(void)
{
    double monthlyRepayment; //repayment amount
    double P;                //loan of P euro
    double r;                //interest rate
    double n;                //number of years

    /*USER INPUT*/
    printf("What is the amount to be payed off? \n");
    scanf("%lf", &P);
    printf("What is the annual interest rate? \n");
    scanf("%lf", &r);
    printf("How many years? \n");
    scanf("%lf", &n);

    /*OUTPUT*/
    repayment(P, r, n, &monthlyRepayment);
    printf("%lf", monthlyRepayment);
    return 0;
}
void repayment(double P, double r, double n, double *monthlyRepayment)
{
    /*Monthly interest rate*/
    double rM = r / (12 * 100); // This equation is actually wrong, it should be given by the (12th root of (r/100)+1)-1
    *monthlyRepayment = (P * rM) / (1 - pow(1 + rM, -12 * n));
}