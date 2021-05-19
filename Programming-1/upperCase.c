
#include <stdio.h>
int main()
{
    int i, n;

    /*USER INPUT LENGTH, STORED IN N*/
    printf("Please input the length of your message: ");
    scanf("%d", &n);
    char msg[n + 1];

    /*USER INPUT MESSAGE*/
    printf("Please enter your message:");
    for (i = 0; i < n + 1; i++)
    {
        scanf("%c", &msg[i]);
    }

    /*UPPERCASE PROGRAM*/
    for (i = 0; i <= n + 1; i++)
    {
        /*Checks if the value is actually a lowercase letter, then makes it uppercase*/
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            msg[i] = msg[i] - 32; //Difference between lowercase and upper case ASCII is 32
        }
    }
    /*OUTPUT RESULT*/
    printf("Result: ");
    printf("%s", msg);

    return 0;
}