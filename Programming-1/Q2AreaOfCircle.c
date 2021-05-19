
#include <stdio.h>
#define PI 3.14159265358979323846

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float radius, area;

    /*Asks user for variables*/
    printf("Please enter the radius of your circle ");
    scanf("%f", &radius);

    //Where out calculations take place
    area = PI * radius * radius;

    // Printing our result
    printf("The area of your Circle is %.2f square units \n", area);
    return 0;
}
