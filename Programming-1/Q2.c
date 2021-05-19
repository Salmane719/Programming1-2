
#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    int count;
    char msg[MAX];
    /*INPUT*/
    printf("Enter a string, which is less than 50 charachters: ");
    fgets(msg, MAX, stdin);

    /*BRUTE FORCE APPROACH TO FINDING ANY FOR OF DOGS*/
    for (int i = -1; msg[i] != '\0'; ++i)
    {
        if ((msg[i] == 'd' || msg[i] == 'D') && (msg[i + 1] == 'o' || msg[i + 1] == 'O') && (msg[i + 2] == 'g' || msg[i + 2] == 'G') && (msg[i + 3] == 's' || msg[i + 3] == 'S'))
        {
            count++;
        }
    }
    /*OUTPUT*/
    printf("Dogs occurs %d times", count);
    return 0;
}