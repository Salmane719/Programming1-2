
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Add Comments*/
int main(void)
{
    int compWins = 0, playerWins = 0, randNum, tie = 0;

    /*Just seeding the random function so it doesn't output the same set of numbers*/
    srand(time(NULL));

    /*The For loop runs for 10 times and records the number of User Wins, Computer Wins & Ties*/
    for (int i = 0; i < 10; i++)
    {
        int userChoice;
        /*USER INPUT*/
        printf("Please choose 1 for ROCK, 2 for SCISSORS or 3 for PAPER.");
        scanf("%d", &userChoice);

        /*Computer Input*/
        randNum = rand() % 3 + 1;

        /*Checks for ties */
        if (randNum == userChoice)
        {
            printf("IT'S A TIE!!!\n");
            tie++;
            i--;
        }
        
        else if (userChoice != 1 && userChoice != 2 && userChoice != 3)
        {
            i--;
            printf("Please enter a valid integer between 1-3");
        }
        /*A series of if statements that checks the Computer input first and then inside the if statement it checks the user input and compares */
        else if (userChoice == 1)
        {
            if (randNum == 2)
            {
                printf("User chose ROCK. Computer chose SCISSORS. User WON because ROCK beats SCISSORS.");
                playerWins++;
            }
            if (randNum == 3)
            {
                printf("User chose ROCK. Computer chose Paper. Computer WON because PAPER beats ROCK.\n");
                compWins++;
            }
        }
        else if (userChoice == 2)
        {
            if (randNum == 1)
            {
                printf("User chose SCISSORS. Computer chose ROCK. Computer WON because ROCK beats SCISSORS.\n");
                compWins++;
            }
            if (randNum == 3)
            {
                printf("User chose SCISSORS. Computer chose Paper. User WON because SCISSORS beats PAPER.\n");
                playerWins++;
            }
        }
        else if (userChoice == 3)
        {
            if (randNum == 1)
            {
                printf("User chose PAPER. Computer chose ROCK. User WON because PAPER beats ROCK.\n");
                playerWins++;
            }
            if (randNum == 2)
            {
                printf("User chose PAPER. Computer chose SCISSORS. Computer WON because SCISSORS beats ROCK.\n");
                compWins++;
            }
        }
        printf("%d", i);
    }
    //Output our final results
    printf("In the 10 non tied games, the computer won %d times & the user won %d times! There have been %d ties during this time.", compWins, playerWins, tie);
    return 0;
}