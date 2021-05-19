
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float celsius, Fahrenheit;

    /*Asks user for variables*/
    printf("Please enter the temperature in degrees Celsius ");
    scanf("%f", &celsius);

    //Where out calculations take place
    Fahrenheit = 1.8 * celsius + 32;

    // Printing our result
    printf(" The temperature in degrees Fahrenheit is %.2f \n", Fahrenheit);
    return 0;
}
