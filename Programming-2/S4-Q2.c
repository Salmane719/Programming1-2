#include <stdio.h>// insering header file 
#include <string.h>// inserting header file 

void copyArrayIndexWay(char * const newArray1, const char * const originalArray1) // using function and declaring pointers 
{

for ( int i = 0; i < 9; i ++) // using loop to loop  9 times
{
 newArray1[i]=originalArray1[i]; // orginal index stored into newarray index 

}
newArray1[9]='\0'; // array has 9 characters equals to null 


for ( int j =0 ; j < 9; j ++) // using loop to loop 9 times 
{
    printf( "%c",newArray1[j]); // printing the characters 
}

printf("\n"); // printing new line

} 
void copyPointerWay(char *newArray2, const char *originalArray2)// using function and declaring pointers 
{
while( *originalArray2 != '\0') // not equal to null 
{
*newArray2=*originalArray2; // stored into new arry using pointers from the function 
newArray2++;// inceasing  the value by one 
originalArray2++; // the same here increasing the value by one
}
*newArray2='\0';//pointers not equl to null
newArray2 -= 10 ;//subtracting 10 from the value 
int s = 0 ; // decalaring integer to 0 .
while( newArray2[s] != '\0') // using while and using index so it can be not equal to null 
{
    printf("%c",newArray2[s],s++); //printing the value and incremented by one 

}
 
}

int main (void)// the main
{
char originalArray1[] ="COMP10120";//  declaring a character that has 10 in size 
char originalArray2[] ="COMP10110";// declaring a character that has 10 in size 
char newArray1[10];//array has 10 storage spaces 
char newArray2[10];//array 2 has 10 storage spaces 

copyArrayIndexWay(newArray1, originalArray1);// printing out all the result from the function for array1 


copyPointerWay( newArray2,originalArray2);// printing out all the result from the function for array2
return 0;//end of a program
 
}


