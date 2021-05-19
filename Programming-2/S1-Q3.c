#include <stdio.h>
int main(void)
{
   int i, num, p = 0 ;
   printf("Please enter a number: \n");// output 
   scanf("%d", &num); //input from the user 
   
   
   for(i=1; i<=num; i++) // using the loop for the condition 
   {
      if(num%i==0) // checking if statement 
      {
         p++; //what inside the value p being added to one by using ++ untill the loops stops 
      }
   }
   if(p==2)//
   {
      printf("Entered number is %d "\
             "and it is a prime number.",num); // output the result if it prime 
   }
   else
   {
      printf("Entered number is %d "\
             "and it is not a prime number.",num); // output the result if it not a prime 
   }
   return 0 ; // end of the program 
 
}
