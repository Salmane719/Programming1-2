
#include <stdio.h>
#define PI 3.14159265358979323846

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float radius, volume;

    /*Asks user for variables*/
    printf("Please enter the radius of your sphere ");
    scanf("%f", &radius);

    //Where out calculations take place
    volume = (4 / 3) * PI * (radius * radius * radius);

    // Printing our result
    printf("The volume of your sphere is %.2f cubic units \n", volume);
    return 0;
}
