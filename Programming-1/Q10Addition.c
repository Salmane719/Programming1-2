
#include <stdio.h>

/*Where our code runs*/
int main()
{
    /*Initializes our variables as integers for whole numbers*/
    int firstNumber, secondNumber, answer;

    /*Asks user for variables*/
    printf("Please enter your first number ");
    scanf("%d", &firstNumber);

    printf("Please enter your second number ");
    scanf("%d", &secondNumber);
    //Where out calculations take place
    answer = firstNumber + secondNumber;

    // Printing our result
    printf("%d plus %d is %d \n", firstNumber, secondNumber, answer);
    return 0;
}