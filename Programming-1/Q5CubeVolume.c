
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float cubeWidth, cubeVolume;

    /*Asks user for variables*/
    printf("Please enter the width of your cube ");
    scanf("%f", &cubeWidth);

    //Where out calculations take place
    cubeVolume = cubeWidth * cubeWidth * cubeWidth;

    // Printing our result
    printf("The volume of your cube is %.2f cubic units \n", cubeVolume);
    return 0;
}
