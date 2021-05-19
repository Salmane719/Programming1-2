//19724421 student ID
#include <stdio.h>
#include <stdlib.h>  // header files 
#include <string.h>
int main() {
    char location[1000]; // storing 1000 characters into the array 
    char names[1000];// storing 1000 characters names into  the array 
    int bignumbers; // declaring an integer 
    int meduimnumbers;// declaring an integer
    int smallnumbers;// declaring an integer
      FILE *cfptr; //storing the file in the cfptr pointer 
    cfptr = fopen( "hi.txt ","w"); //creates a file 
    FILE *fptr; //storing the file in the fptr pointer
    if ((fptr = fopen("C:\\Users\\Salmane\\Downloads\\myFile (1).txt", "r")) == NULL) { // input the file by using my directory 
        puts("could not open a file "); // if it does not then it not going to open 
        
        exit(1); //end 
    }
while (!feof(fptr)){// end file so it can reads everything in the file by using the while loop 
    
   fscanf(fptr, "%s%s%d%d%d", location,names,&bignumbers,&meduimnumbers,&smallnumbers);// scanning from the file 
    if (smallnumbers== 1&& strcmp(location,"Dublin") == 0) // checking condition by using smallnumbers if they are equal to 1 and we want dublin to be true
    
    fprintf(cfptr,"%s\t%s\t %d\t %d\t%d\n", location,names,bignumbers,meduimnumbers,smallnumbers); // printing everything into the file 
  
}
 
    
 
    fclose(cfptr); // closing the output file
    fclose(fptr);// closing the input file

    return 0;
}

