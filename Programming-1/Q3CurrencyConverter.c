
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float euro, sterling;

    /*Asks user for variables*/
    printf("Please enter the amount of Euros you want to convert ");
    scanf("%f", &euro);

    //Where out calculations take place
    sterling = euro * 0.8;

    // Printing our result
    printf("The amount of sterling you have is now %.2f pounds\n", sterling);
    return 0;
}
