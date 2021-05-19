//19724421 student ID 
#include <stdio.h>
#include <stdlib.h> // header files to use 
#include <time.h>

void swap(int *a, int *b) { // declaring  function and declaring arrays
    int temp = *a; // storing the value a into the integer 
    *a = *b;// using the swap logic 
    *b = temp;
}

void randomize(int arr[], int n) { //decalring function called randomize 
    srand(time(NULL));// using the srand function 
    int i; // declaring integer fo the loop 
    for(i = n-1; i > 0; i--) {  // loop 
        int j = rand() % (i+1);  //dtoring rand function into the integer j
        swap(&arr[i], &arr[j]); // calling the swap function for the array i and j 
    }
}
void print(int arr[],int n ) // //declaring function for print 
{
    for(int i=0; i<n; i++) { //loop 
        printf("%d\n", arr[i]);  // using throught the array 
    }

}


int main() {// main 
    int arr[] = {2,4,6,8,10,12,14,16,18,20}; //given the array the values
    int n = sizeof(arr)/ sizeof(arr[0]); // storing the size of array divided by array 0 into the integer n 
    printf("before shuffle\n");// printing

    for(int i=0; i<n; i++) { // loop 
        printf("%d\n", arr[i]); // printing using the loops with array 
    }

    randomize (arr, n); // randomizing array and the integer n  by calling the randomize function 
    printf( "\n---------------------------------"); //printing 
    printf("\nafter shuffle\n\n"); //printing 
    for(int i=0; i<n; i++) { // using loop 
        printf("%d\n", arr[i]); // printing using loops with the array 
    }
    print(arr,n);//calling the function back and printing the values 
    return 0;// end of program 
}