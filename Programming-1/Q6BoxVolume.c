
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as floats for more complex calculations*/
    float height, width, depth, boxVolume;

    /*Asks user for variables*/
    printf("Please enter the height of your box ");
    scanf("%f", &height);

    printf("Please enter the width of your box ");
    scanf("%f", &width);

    printf("Please enter the depth of your box ");
    scanf("%f", &depth);

    //Where out calculations take place
    boxVolume = height * width * depth;

    // Printing our result
    printf("The volume of your box is %.2f cubic units \n", boxVolume);
    return 0;
}
