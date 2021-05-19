
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        /*A series of if statements that checks the Computer input first and then inside the if statement it checks the user input and compares */
        else if (randNum == 1)
        {
            if (userChoice == 2)
            {
                printf("Computer chose ROCK. User chose SCISSORS. Computer WON because ROCK beats SCISSORS.\n");
                compWins++;
            }
            if (userChoice == 3)
            {
                printf("Computer chose ROCK. User chose Paper. User WON because PAPER beats ROCK.\n");
                playerWins++;
            }
        }
        else if (randNum == 2)
        {
            if (userChoice == 1)
            {
                printf("Computer chose SCISSORS. User chose ROCK. USER WON because ROCK beats SCISSORS.\n");
                playerWins++;
            }
            if (userChoice == 3)
            {
                printf("Computer chose SCISSORS. User chose Paper. COMPUTER WON because SCISSORS beats PAPER.\n");
                compWins++;
            }
        }
        else if (randNum == 3)
        {
            if (userChoice == 1)
            {
                printf("Computer chose PAPER. User chose ROCK. COMPUTER WON because PAPER beats ROCK.\n");
                compWins++;
            }
            if (userChoice == 2)
            {
                printf("Computer chose PAPER. User chose SCISSORS. USER WON because SCISSORS beats ROCK.\n");
                playerWins++;
            }
        }
    }
    //Output our final results
    printf("In the 10 non tied games, the computer won %d times & the user won %d times! There have been %d ties during this time.", compWins, playerWins, tie);
    return 0;
}