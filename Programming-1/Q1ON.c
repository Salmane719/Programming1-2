
#include <stdio.h>

int main()
{
    /*USER INPUT; Size of Array*/
    int N;
    printf("Enter how long you want your Array to be: ");
    scanf("%d", &N);

    /*USER INPUT; Contents of Array*/
    printf("Enter the contents of your Array: \n");
    int a[N];
    for (int i = 0; i < N; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int value = 0; //The value of the most frequent number
    int count = 0;
    /*Find the most frequent number; 
    Although a bit flawed as it only works perfectly 
    if we're looking for values greater than N/2 Which is adequete for us*/
    for (int i = 0; i < N; i++)
    {
        if (count == 0)
        {
            value = a[i];
        }
        if (value == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    /*Ensures that our value occures more than N/2 times*/
    count = 0; //Reseting Count to Zero
    for (int i = 0; i < N; i++)
    {
        if (value == a[i])
        {
            count++;
            if (count > N / 2)
            {
                /*Returns the value if it meets oiut conditions*/
                printf("%d is your answer!\n", value);
                return 0;
            }
        }
    }
    printf("No values that exceed N/2 occurances\n");
    return 0;
}