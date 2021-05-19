

#include <stdio.h>

/*Start running code*/
int main(void)
{
    /*Sets the day as integers*/
    int day, i;

    /*A loop that runs that code within and once complete increments the day*/
    for (day = 1; day <= 12; day++)
    {
        /*A line of text that executes first so long as the above for loop is valid*/
        printf("On the %d day of Christmas, ", day);
        printf("my true love gave to me\n");
        /*This nested for loop works backwords and prints the last few lines first so that "partridge in a pear tree" is always last
        and the day increases so that there is something new on top*/
        for (i = day; i > 0; i--)
        {
            /*A set of if statements that run in the opposite direction*/
            if (i == 1)
            {
                /*Depending on whether it's the first or second day, it will print "A partridge" or "and a partridge"*/
                if (day == 1)
                {
                    printf("A ");
                }
                else
                {
                    printf("And a ");
                }
                printf("partridge in a pear tree.\n");
            }
            else if (i == 2)
            {
                printf("Two turtledoves,\n");
            }
            else if (i == 3)
            {
                printf("Three French hens,\n");
            }
            else if (i == 4)
            {
                printf("4 calling birds,\n");
            }
            else if (i == 5)
            {
                printf("5 gold rings,\n");
            }
            else if (i == 6)
            {
                printf("6 geese a-laying,\n");
            }
            else if (i == 7)
            {
                printf("7 swans a-swimming,\n");
            }
            else if (i == 8)
            {
                printf("8 maids a-milking,\n");
            }
            else if (i == 9)
            {
                printf("9 ladies dancing,\n");
            }
            else if (i == 10)
            {
                printf("10 lords a-leaping,\n");
            }
            else if (i == 11)
            {
                printf("11 pipers piping,\n");
            }
            else if (i == 12)
            {
                printf("12 drummers drumming,\n");
            }
        }
        printf("\n");
    }
    return 0;
}