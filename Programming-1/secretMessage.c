
#include <stdio.h>

int main()
{
    int i, n;

    /*KEY FOR ENCODING UPPERCASE*/
    char perm[27] = "QJCZIEAUNGSDFXMPHYBKLORTVW";
    /*KEY FOR ENCODING LOWERCASE*/
    char permLower[27] = "qjczieaungsdfxmphybklortvw";

    /*USER INPUT LENGTH, STORED IN N*/
    printf("Please input the length of your message: ");
    scanf("%d", &n);
    char msg[n + 1];

    /*USER INPUT MESSAGE*/
    printf("Please enter the message to be encrypted: ");
    for (i = 0; i < n + 1; i++)
    {
        scanf("%c", &msg[i]);
    }
    for (i = 0; i < 22; i++)
    {
        /*ENCODES BY REPLACING EACH LETTER WITH THE LOCATION EQUAL TO THAT IN THE ENCODING ARRAYS*/

        if (msg[i] >= 'A' && msg[i] <= 'Z')
        {
            msg[i] = perm[msg[i] - 'A'];
        }
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            msg[i] = permLower[msg[i] - 'a'];
        }
    }
    printf("Result: ");
    printf("%s", msg);
}