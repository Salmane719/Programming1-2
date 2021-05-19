
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float base, height, area;

    /*Asks user for variables*/
    printf("Please enter the base of the triangle ");
    scanf("%f", &base);

    printf("Please enter the height of the triangle ");
    scanf("%f", &height);

    //Where out calculations take place
    area = (base * height) / 2;

    // Printing our result
    printf("The area of your triangle is %.2f square units \n", area);
    return 0;
}
