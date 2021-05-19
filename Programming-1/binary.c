
#include <stdio.h>
#include <math.h>

int main()
{
    int input, i; //Initialize our variables for later use

    /*User Input*/
    printf("Enter your your decimal number: ");
    scanf("%d", &input);

    //Gets the number of terms in the binary array goes where it is 2^i & i is the length of the arry
    i = log(input) / log(2);
    int arr[i];

    /*Gets the binary numbers and stores it in an array */
    for (int j = i; j >= 0; j--)
    {
        arr[j] = input % 2;
        input = input / 2;
    }
    //Prints out the binary array
    for (int k = 0; k <= i; k++)
    {
        printf("%d", arr[k]);
    }
    return 0;
}