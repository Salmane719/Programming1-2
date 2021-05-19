#include <stdio.h>
#include <string.h> // inserting header files 
#include<stdlib.h>

int main (void)  // the main where  verything runs 
{

char *str = (char*) malloc(sizeof(char) * 100); //declaring char , integers and pointers
int count =0 ; //initiliazing value to zero 
int count1 =0;  // initiliazing  count valu to zero 

printf("Enter any string (max 100 characters with no spaces): \n"); // printing the ouput
fgets(str, 100, stdin);//stored the user input ins str which is an array.
 
while ( *str != '\0')//loops puting pointer into the string 
{
if ( *str == 'a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str == 'A'||*str == 'E'||*str == 'I'||*str == 'O'||*str == 'U') // checking if statemnet for the vowels by using logical or which is true 
{
    count++;// increasing cout by one 
}
else  //or else if statement 

count1++;// incresing count1 by one again 
str++; // incresing the string by one depending on the user 

}

printf( "the vowels are : %d\n",count);// printing how many vowels are in the line 
printf( "the cossonant are : %d \n",count1);//printing how many cossonant are in the line 

return 0 ; // returning it to zero
}