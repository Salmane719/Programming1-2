
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int n;        /* The number of lengths */
    int x;        /* The target length */
    int *lengths; /* The array of available lengths */

    /*INPUT*/
    FILE *fp;
    /*WARNING! REQUIRES FILE 'test.txt'*/
    fp = fopen("test.txt", "r");
    fscanf(fp, "%d", &x);
    fscanf(fp, "%d", &n);
    lengths = (int *)malloc(sizeof(int) * n);
    if (!lengths)
    {
        printf("ERROR: Insufficient memory for lenghts array.\n");
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &lengths[i]);
    }
    fclose(fp);

    /*Converts our target(x) to Nanometers*/
    int target = x * 10000000; //Converts CM to Nm

    int l = 0;
    int r = n - 1;
    /*Finds the 2 applicable numbers, if they exist*/
    while (l < r)
    {
        if ((lengths[l] + lengths[r]) == target)
        {
            /*Output*/
            printf("%dnm + %dnm = %dcm such that %dnm <= %dnm\n", lengths[l], lengths[r], x, lengths[l], lengths[r]);
            return 0;
        }
        else if ((lengths[l] + lengths[r]) <= target)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    /*If no value exists:*/
    printf("NONE EXISTS\n");
    return 0;
}