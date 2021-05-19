
#include <stdio.h>

int main()
{
    int i, n;

    /*KEY FOR DECODING UPPER CASE*/
    char perm[27] = "GSCLFMJQEBTUOIVPAWKXHYZNRD";
    /*KEY FOR DECODING LOWER CASE*/
    char permLower[27] = "gsclfmjqebtuoivpawkxhyznrd";

    /*USER INPUT LENGTH, STORED IN N*/
    printf("Please input the length of your message: ");
    scanf("%d", &n);
    char msg[n + 1];

    /*USER INPUT MESSAGE*/
    printf("Please your encrypted message: ");
    for (i = 0; i < n + 1; i++)
    {
        scanf("%c", &msg[i]);
    }
    /*DECODE PROGRAM*/
    for (int i = 0; i < n; i++)
    {
        /*DECODES BY REPLACING EACH LETTER WITH THE LOCATION EQUAL TO THAT IN THE DECODING ARRAYS*/
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

    return 0;
}