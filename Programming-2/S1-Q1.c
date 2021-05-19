#include<stdio.h>

    int main ( void)
{

int h1; int h2 ; int h3 ; int  shorte ; int tall;  //declaring all the variables 

printf( " enter the height of the 3 children\n "); //output 
scanf("%d",&h1); // input by asking the user to enter a value 
scanf("%d",&h2);// the same 
scanf("%d",&h3);// the same 

shorte = h1; 
tall = h1 ; 
if (  h2 < shorte )
{
shorte = h2 ;  //checking it is shorte 
}
if ( h3 < shorte )
{
    shorte = h3; // checking is shorter than then next by making it the samllest in thsi program 
}
printf( " the shortest %d\n", shorte); //output 

if ( h2 > tall) // checking condition if true or false 
{
    tall = h2; 
}
if ( h3 > tall )// checking condition if true or false 
{
    tall = h3; 
}
printf( " the tallest is %d\n",tall); // output 
int average = (h1+h2+h3)/3; // the calculation of the average 

printf("\nAverage is %d",average); //output 

return 0 ; //end of the program 
}