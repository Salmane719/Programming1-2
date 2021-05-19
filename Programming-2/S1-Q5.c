#include <stdio.h>
#define PI 3.14
int main(void )
{
   float raduis;
    float area, circumference;

   //Asking the  user to enter the radius of circle
   printf("\nEnter radius of circle: \n");
   //Storing the user the  input into variable raduis
   scanf("%f",&raduis);

   //Calculate and display Area
   area = PI * raduis * raduis;
   printf("\nArea of circle is: %f\n",area);

   //Caluclate and display Circumference
   circumference = 2 * PI * raduis;
   printf("\nCircumference of circle is: %f\n",circumference);

   return(0);
}