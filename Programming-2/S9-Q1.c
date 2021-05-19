//19724421
include <stdio.h>
#include <stdlib.h> // header files 

int main(void ) //main 
{
    struct zip_custs{// decalring the struct 
        int zip_code;  // declarinf zip code inside the struct 
        int customer_count; // declaring customer_count inside the struct 
    };
    int myCustomers[5][2]={{86956,1},{36568,3},{6565,0},{999555,22},{85446,88}}; //decalring mycutdomer as an integer with 2d array and assigning value to it 
    struct zip_custs myCustomers1[5]; //recalling zip_custs from the struct 
    int i; // decalring i for the loop 
    for(i=0;i<5;i++) // loop 5 times 
    {
        myCustomers1[i].zip_code=myCustomers[i][0];//loops for the first column which is 86956
        myCustomers1[i].customer_count=myCustomers[i][1];//loops for the 2 colmun which is 1    //examples 
    }
    FILE *f=fopen("customers.dat","wb"); //creating afile called customers.dat , with wb which is binary 
    if(f){ // if it true do the follwing 
        fwrite(myCustomers1,5*sizeof(struct zip_custs),1,f);// write to the file 
        fclose(f); //closinfg the file 
    }else 
        printf("error");//in other case if what on above doesn't work then prints error
    return 0;
}