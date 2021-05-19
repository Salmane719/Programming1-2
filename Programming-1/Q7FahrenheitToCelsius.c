
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float Fahrenheit, celsius;

    /*Asks user for variables*/
    printf("Please enter the temperature in degrees Fahrenheit ");
    scanf("%f", &Fahrenheit);

    //Where out calculations take place
    celsius = (Fahrenheit - 32) * 5 / 9;

    // Printing our result
    printf(" The temperature in degrees celsius is %.2f \n", celsius);
    return 0;
}