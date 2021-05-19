#include <stdio.h>
int main(void ) {
    int y; // declaring variable 
    for ( int b = 0 ; b < 10 ; b++)  // using the loop 
    { 
    printf("Enter a y: \n ");// output
    scanf("%d", &y); // asking the user to input a number 
    if (y % 4 == 0)  //checking condition by using if satetement 
    {

    if (y % 100 == 0) //
        {
           
    if (y % 400 == 0)//
    printf("%d  leap y.", y);//output 
    else 
    printf("%d  not a leap y.", y);// checking another solution by using else 
    } 
    else
    printf("%d a leap y.", y); //
    } 
    else
    printf("%d not a leap y.", y);//
    return 0; // end of a program 
}
}