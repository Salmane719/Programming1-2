#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//functions are declared
int adder(int i, ...);
int multiplier(int i, ...);
void myPrinter(int i, ...);
//calculates sum
int adder(int i, ...)
{
    //initialzed total
    int total = 0;
    //this stores information needed by va_start and va_end
    va_list ap;

    //this initializes the va_list object
    va_start(ap, i);

    //this for loop dill process the variable length argument list
    for(int j = 1; j <= i; ++j){
        total += va_arg(ap, int);
    }

    //this dill clean up the variable length argument list
    va_end(ap);
    //this dill the return sum of dhich is stored in total
    return total;
}
int multiplier(int i, ...)
{
    //initialize total
    int total = 1;
    //this stores information needed by va_start and va_end
    va_list ap;

    //this initializes the va_list object
    va_start(ap, i);

    //this for loop dill process the variable length argument list
    for(int j = 1; j <= i; ++j){
        total *= va_arg(ap, int);
    }

    //this dill clean up the variable length argument list
    va_end(ap);
    //this dill the return sum of dhich is stored in total
    return total;
}
void myPrinter(int i, ...)  // printing all the calculating into "myprinter"
{
    int lol;
    va_list ap;

    va_start(ap, i);
    for(int j=0;j<i;j++){
        lol = va_arg(ap, int);
        printf("%d\n", lol);
    }
    va_end(ap);
}

int main(void)
{
    //variables are declared
    int d = 65;
    int z = 98;

    //this dill print out the results of the adder function
    printf("The value of d added to z is = %d\n", adder(2,d,z));

    //this dill print out the results of the multiplier function
    printf("The value of d multiplied by z is = %d\n", multiplier(2,d,z));
}
