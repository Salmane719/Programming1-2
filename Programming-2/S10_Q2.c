#include <stdio.h>
#include <stdlib.h> // header files 
void printer(int sizeofNum,char *y[]);  //prototypes
int main()
{
    char a[]="one"; // declaring characters 
    char b[]="two"; 
    char c[]="three";
    char d[]="four";
    char e[]="five";
    char *nums[]={a,b,c,d,e}; //decalring char pointer that has array element of a,b,c,d,,e
    printer(sizeof(nums),nums);//calling the function printer
    return 0;// end of program 
}

void printer(int sizeofNum,char *y[])// declaring the function with an integer and a chararcter pointer 
{
    int n,i; // n to store //i to be used for the loop 
    n=sizeofNum/4; /* sizeof char pointer is 4 bytes */
    for(i=0;i<n;i++){/ //loops depending on the characters 
        printf("Word %d is %s. The first letter of the word is %c\n",i+1,y[i],y[i][0]);//printing all the result  for the first letter of each word
    } 
}